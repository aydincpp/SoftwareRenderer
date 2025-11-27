#include "platform/framebuffer.h"
#include "platform/input.h"
#include "graphics/buffer.h"
#include "graphics/draw.h"
#include "math/matrix.h"
#include "math/utils.h"

#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define COUNT_OF_ARRAY(array) (sizeof(array) / sizeof(array[0]))
#define GRID_VERTEX_COUNT(half) ((((half) * 2) + 1) * 4)

typedef struct {
  Vec3f_t pos;
  Vec4f_t col;
} Vertex;

typedef struct {
  Mat4x4f_t model;
  Mat4x4f_t view;
  Mat4x4f_t projection;
} MeshTransforms;

typedef struct {
  VertexBuffer vertexBuffer;
  VertexLayout vertexLayout;
  IndexBuffer  indexBuffer;
} MeshGeometry;

typedef struct {
  MeshGeometry    geometry;
  MeshTransforms  transforms;
} MeshInstance;

typedef struct {
  Vec3f_t eye;
  Vec3f_t target;
  Vec3f_t up;
  float fov;
  float aspect;
  float near;
  float far;
  float yaw;
  float pitch;
  float move_speed;
  float rotate_speed;
} Camera;

Vec3f_t camera_get_direction(const Camera* cam) {
  Vec3f_t dir;
  dir.x = cosf(cam->pitch) * sinf(cam->yaw);
  dir.y = sinf(cam->pitch);
  dir.z = cosf(cam->pitch) * cosf(cam->yaw);
  return vec3f_normalize(dir);
}

void handle_input(Input* input, Camera* camera)
{
  // exit on q press
  if (input->pressed['q']) {
    exit(0);
  }

  Vec3f_t forward = camera_get_direction(camera);
  camera->target  = vec3f_add(camera->eye, forward);
  Vec3f_t right   = { cosf(camera->yaw), 0, -sin(camera->yaw) };

  // movement
  if (input->keys['w']) camera->eye = vec3f_sub(camera->eye, vec3f_mul_scalar(forward,  camera->move_speed));
  if (input->keys['s']) camera->eye = vec3f_add(camera->eye, vec3f_mul_scalar(forward,  camera->move_speed));
  if (input->keys['a']) camera->eye = vec3f_add(camera->eye, vec3f_mul_scalar(right,    camera->move_speed));
  if (input->keys['d']) camera->eye = vec3f_sub(camera->eye, vec3f_mul_scalar(right,    camera->move_speed));

  // rotation
  if (input->keys['h']) camera->yaw -= camera->rotate_speed;
  if (input->keys['l']) camera->yaw += camera->rotate_speed;

  if (input->keys['k']) {
    camera->pitch += camera->rotate_speed;
    if (camera->pitch > PI / 2.0f - 0.01f) camera->pitch = PI / 2.0f - 0.01f;
  }
  if (input->keys['j']) {
    camera->pitch -= camera->rotate_speed;
    if (camera->pitch < -PI / 2.0f + 0.01f) camera->pitch = -PI / 2.0f + 0.01f;
  }
}

static inline Mat4x4f_t build_mvp(const MeshTransforms* t, const Camera* cam) {
  Mat4x4f_t view        = mat4x4f_lookat(cam->eye, cam->target, cam->up);
  Mat4x4f_t projection  = mat4x4f_perspective(cam->fov, cam->aspect, cam->near, cam->far);

  Mat4x4f_t mvp = mat4x4f_mul(&view, &t->model);
  mvp           = mat4x4f_mul(&projection, &mvp);

  return mvp;
}

static inline void update_vertices(VertexBuffer* vb,
                                   const Vertex* source,
                                   const Mat4x4f_t* mvp)
{
  for (size_t i = 0; i < vb->vertex_count; ++i) {
    Vec3f_t* pos = get_attribute_pointer(vb, i, ATTR_POSITION);

    Vec4f_t v = {
      source[i].pos.x,
      source[i].pos.y,
      source[i].pos.z,
      1.0f
    };

    Vec4f_t t = mat4x4f_mul_vec4f(mvp, &v);

    if (t.w != 0.0f) {
      t.x /= t.w;
      t.y /= t.w;
      t.z /= t.w;
    }

    pos->x = t.x;
    pos->y = t.y;
    pos->z = t.z;
  }
}

int main (void)
{
  // initialize framebuffer
  Framebuffer fb;
  if (!fb_init(&fb, "/dev/fb0"))
    return EXIT_FAILURE;

  // initialize input
  Input input;
  input_init(&input);

  // define triangle vertices
  const Vertex triangle_vertices[] = {
    { .pos = {-0.5f, -0.5f, 0.0f }, .col = { 1.0f, 0.0f, 0.0f, 1.0f } },
    { .pos = { 0.5f, -0.5f, 0.0f }, .col = { 0.0f, 1.0f, 0.0f, 1.0f } },
    { .pos = { 0.0f,  0.5f, 0.0f }, .col = { 0.0f, 0.0f, 1.0f, 1.0f } }
  };

  // define triangle indices
  const unsigned int triangle_indices[] = {
    0, 1, 2
  };

  const Vertex cube_vertices[] = {
    // front face
    { .pos = { -0.5f, -0.5f,  0.5f }, .col = { 1.0f, 0.0f, 0.0f, 1.0f } }, // 0
    { .pos = {  0.5f, -0.5f,  0.5f }, .col = { 1.0f, 1.0f, 0.0f, 1.0f } }, // 1
    { .pos = {  0.5f,  0.5f,  0.5f }, .col = { 0.0f, 1.0f, 0.0f, 1.0f } }, // 2
    { .pos = { -0.5f,  0.5f,  0.5f }, .col = { 0.0f, 1.0f, 1.0f, 1.0f } }, // 3

    // back face
    { .pos = { -0.5f, -0.5f, -0.5f }, .col = { 1.0f, 0.0f, 1.0f, 1.0f } }, // 4
    { .pos = {  0.5f, -0.5f, -0.5f }, .col = { 1.0f, 0.5f, 0.0f, 1.0f } }, // 5
    { .pos = {  0.5f,  0.5f, -0.5f }, .col = { 0.0f, 0.5f, 1.0f, 1.0f } }, // 6
    { .pos = { -0.5f,  0.5f, -0.5f }, .col = { 0.5f, 0.0f, 1.0f, 1.0f } }  // 7
  };

  const unsigned int cube_indices[] = {
    // front
    0, 1, 2,
    2, 3, 0,

    // right
    1, 5, 6,
    6, 2, 1,

    // back
    5, 4, 7,
    7, 6, 5,

    // left
    4, 0, 3,
    3, 7, 4,

    // top
    3, 2, 6,
    6, 7, 3,

    // bottom
    4, 5, 1,
    1, 0, 4
  };

  // define attributes
  VertexAttribute attributes[] = {
    { ATTR_POSITION, offsetof(Vertex, pos), sizeof(float), 3 },
    { ATTR_COLOR,    offsetof(Vertex, col), sizeof(float), 4 }
  };

  // define triangle
  MeshInstance triangle;

  // initialize triangle geometry
  triangle.geometry.vertexLayout = vertex_layout_create(attributes, COUNT_OF_ARRAY(attributes), sizeof(Vertex));
  triangle.geometry.vertexBuffer = vertex_buffer_create(triangle_vertices, triangle.geometry.vertexLayout, COUNT_OF_ARRAY(triangle_vertices));
  triangle.geometry.indexBuffer  = index_buffer_create(triangle_indices, COUNT_OF_ARRAY(triangle_indices));

  // initialize triangle transforms
  triangle.transforms.model       = mat4x4f_zero();
  triangle.transforms.view        = mat4x4f_zero();
  triangle.transforms.projection  = mat4x4f_zero();

  // define cube
  MeshInstance cube;

  // initialize cube geometry
  cube.geometry.vertexLayout = vertex_layout_create(attributes, COUNT_OF_ARRAY(attributes), sizeof(Vertex));
  cube.geometry.vertexBuffer = vertex_buffer_create(cube_vertices, cube.geometry.vertexLayout, COUNT_OF_ARRAY(cube_vertices));
  cube.geometry.indexBuffer  = index_buffer_create(cube_indices, COUNT_OF_ARRAY(cube_indices));

  // initialize cube transforms
  cube.transforms.model       = mat4x4f_zero();
  cube.transforms.view        = mat4x4f_zero();
  cube.transforms.projection  = mat4x4f_zero();

  float angle = 0.0f;

  // initialize camera
  Camera camera = {
    .eye          = { 0.0f,  0.0f,  1.0f },
    .target       = { 0.0f,  0.0f,  0.0f },
    .up           = { 0.0f,  1.0f,  0.0f },
    .fov          = deg_to_rad(60),
    .aspect       = fb.aspect,
    .near         = 1.0f,
    .far          = 10.0f,
    .yaw          = 0.0f,
    .pitch        = 0.0f,
    .move_speed   = 0.1f,
    .rotate_speed = 0.03f
  };

  // control main loop
  bool running = true;

  // main loop
  while (running)
  {
    // process input
    input_update(&input);
    handle_input(&input, &camera);

    // update triangle transoforms
    // triangle.transforms.model = mat4x4f_identity();
    // triangle.transforms.model = mat4x4f_rotation(&triangle.transforms.model, (Vec3f_t){angle, angle, angle});
    // update cube transforms
    cube.transforms.model = mat4x4f_identity();
    cube.transforms.model = mat4x4f_rotation(&cube.transforms.model, (Vec3f_t){angle, angle, angle});

    // create triangle mvp
    // Mat4x4f_t triangle_mvp = build_mvp(&triangle.transforms, &camera);
    // create cube mvp
    Mat4x4f_t cube_mvp = build_mvp(&cube.transforms, &camera);

    // update triangle vertices
    // update_vertices(&triangle.geometry.vertexBuffer,
    //                 triangle_vertices,
    //                 &triangle_mvp);
    // update cube vertices
    update_vertices(&cube.geometry.vertexBuffer,
                    cube_vertices,
                    &cube_mvp);
    fb_clear(&fb);
    // draw_index_buffer(&fb, &triangle.geometry.indexBuffer, &triangle.geometry.vertexBuffer, PRIM_TRIANGLES);
    draw_index_buffer(&fb, &cube.geometry.indexBuffer, &cube.geometry.vertexBuffer, PRIM_TRIANGLES);
    fb_present(&fb);

    // update angle
    angle += 0.01f;
    if (angle > PI)
      angle -= 2 * PI;

    // 60 fps
    usleep(16000);
  }

  // cleanup and exit
  vertex_buffer_destroy(&triangle.geometry.vertexBuffer);
  index_buffer_destroy(&triangle.geometry.indexBuffer);
  input_shutdown();
  fb_shutdown(&fb);

  return EXIT_SUCCESS;
}
