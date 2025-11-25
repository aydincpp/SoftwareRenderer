#ifndef DRAW_H
#define DRAW_H

#include "graphics/pixel.h"
#include "platform/framebuffer.h"
#include "graphics/buffer.h"

/**
 * @enum PrimitiveType
 * @brief Types of primitives that can be drawn.
 */
typedef enum
{
  PRIM_POINTS,
  PRIM_LINES,
  PRIM_TRIANGLES
} PrimitiveType;

/**
 * @brief Draw a single pixel to the framebuffer.
 *
 * @param fb  Pointer to the framebuffer where pixel will be drawn.
 * @param p   The pixel containing position and color information.
 */
void
draw_pixel (Framebuffer *fb, Pixel_t p);

/**
 * @brief Draw a line between two pixels with color interpolation.
 *
 * Uses a line drawing algorithm to draw a line
 * between p0 and p1, smoothly interpolating the color along the line.
 *
 * @param fb Pointer to the framebuffer.
 * @param p0 The starting pixel of the line.
 * @param p1 The ending   pixel of the line.
 */
void
draw_line (Framebuffer *fb,
                Pixel_t p0,
                Pixel_t p1);

/**
 * @brief Draw the outline (wireframe) of a triangle.
 *
 * Connects three vertices with lines without filling the interior.
 *
 * @param fb Pointer to the framebuffer.
 * @param p0 First  vertex  pixel.
 * @param p1 Second vertex  pixel.
 * @param p2 Third  vertex  pixel.
 */
void
draw_triangle_wireframe(Framebuffer* fb, 
                             Pixel_t p0,
                             Pixel_t p1,
                             Pixel_t p2);

/**
 * @brief Draw a filled triangle by rasterizing the area inside three vertices.
 *
 * Uses a triangle filling algorithm to color the interior pixels,
 * interpolating vertex colors across the surface.
 *
 * @param fb Pointer to the framebuffer.
 * @param p0 First  vertex  pixel.
 * @param p1 Second vertex  pixel.
 * @param p2 Third  vertex  pixel.
 */
void
draw_triangle_fill (Framebuffer *fb,
                         Pixel_t p0,
                         Pixel_t p1,
                         Pixel_t p2);

/**
 * @brief Draw primitives from a vertex buffer.
 *
 * Depending on the primitive type, interprets the vertex buffer data
 * and draws points, lines, or triangles.
 *
 * @param fb    Pointer to the framebuffer.
 * @param vb    Pointer to the vertex buffer containing vertex data.
 * @param prim  Primitive type to draw.
 */
void
draw_vertex_buffer (Framebuffer *fb, const VertexBuffer *vb,
                    PrimitiveType prim);

#endif /* DRAW_H */
