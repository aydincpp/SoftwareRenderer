#include "math/vector.h"
#include <math.h>

Vec2f_t
vec2f_add (Vec2f_t a, Vec2f_t b)
{
  return (Vec2f_t){ a.x + b.x, a.y + b.y };
}

Vec2i_t
vec2i_add (Vec2i_t a, Vec2i_t b)
{
  return (Vec2i_t){ a.x + b.x, a.y + b.y };
}

Vec3f_t
vec3f_add (Vec3f_t a, Vec3f_t b)
{
  return (Vec3f_t){ a.x + b.x, a.y + b.y, a.z + b.z };
}

Vec3i_t
vec3i_add (Vec3i_t a, Vec3i_t b)
{
  return (Vec3i_t){ a.x + b.x, a.y + b.y, a.z + b.z };
}

Vec4f_t
vec4f_add (Vec4f_t a, Vec4f_t b)
{
  return (Vec4f_t){ a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w };
}

Vec4i_t
vec4i_add (Vec4i_t a, Vec4i_t b)
{
  return (Vec4i_t){ a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w };
}

Vec2f_t
vec2f_sub (Vec2f_t a, Vec2f_t b)
{
  return (Vec2f_t){ a.x - b.x, a.y - b.y };
}

Vec2i_t
vec2i_sub (Vec2i_t a, Vec2i_t b)
{
  return (Vec2i_t){ a.x - b.x, a.y - b.y };
}

Vec3f_t
vec3f_sub (Vec3f_t a, Vec3f_t b)
{
  return (Vec3f_t){ a.x - b.x, a.y - b.y, a.z - b.z };
}

Vec3i_t
vec3i_sub (Vec3i_t a, Vec3i_t b)
{
  return (Vec3i_t){ a.x - b.x, a.y - b.y, a.z - b.z };
}

Vec4f_t
vec4f_sub (Vec4f_t a, Vec4f_t b)
{
  return (Vec4f_t){ a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w };
}

Vec4i_t
vec4i_sub (Vec4i_t a, Vec4i_t b)
{
  return (Vec4i_t){ a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w };
}

Vec2f_t
vec2f_mul (Vec2f_t a, Vec2f_t b)
{
  return (Vec2f_t){ a.x * b.x, a.y * b.y };
}

Vec2i_t
vec2i_mul (Vec2i_t a, Vec2i_t b)
{
  return (Vec2i_t){ a.x * b.x, a.y * b.y };
}

Vec3f_t
vec3f_mul (Vec3f_t a, Vec3f_t b)
{
  return (Vec3f_t){ a.x * b.x, a.y * b.y, a.z * b.z };
}

Vec3i_t
vec3i_mul (Vec3i_t a, Vec3i_t b)
{
  return (Vec3i_t){ a.x * b.x, a.y * b.y, a.z * b.z };
}

Vec4f_t
vec4f_mul (Vec4f_t a, Vec4f_t b)
{
  return (Vec4f_t){ a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w };
}

Vec4i_t
vec4i_mul (Vec4i_t a, Vec4i_t b)
{
  return (Vec4i_t){ a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w };
}

Vec2f_t
vec2f_div (Vec2f_t a, Vec2f_t b)
{
  return (Vec2f_t){ a.x / b.x, a.y / b.y };
}

Vec2f_t
vec2i_div (Vec2i_t a, Vec2i_t b)
{
  return (Vec2f_t){ (float)a.x / b.x, (float)a.y / b.y };
}

Vec3f_t
vec3f_div (Vec3f_t a, Vec3f_t b)
{
  return (Vec3f_t){ a.x / b.x, a.y / b.y, a.z / b.z };
}

Vec3f_t
vec3i_div (Vec3i_t a, Vec3i_t b)
{
  return (Vec3f_t){ (float)a.x / b.x, (float)a.y / b.y, (float)a.z / b.z };
}

Vec4f_t
vec4f_div (Vec4f_t a, Vec4f_t b)
{
  return (Vec4f_t){ a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w };
}

Vec4f_t
vec4i_div (Vec4i_t a, Vec4i_t b)
{
  return (Vec4f_t){ (float)a.x / b.x, (float)a.y / b.y, (float)a.z / b.z,
                    (float)a.w / b.w };
}

Vec2f_t
vec2f_mul_scalar (Vec2f_t v, float s)
{
  return (Vec2f_t){ v.x * s, v.y * s };
}

Vec2i_t
vec2i_mul_scalar (Vec2i_t v, int s)
{
  return (Vec2i_t){ v.x * s, v.y * s };
}

Vec3f_t
vec3f_mul_scalar (Vec3f_t v, float s)
{
  return (Vec3f_t){ v.x * s, v.y * s, v.z * s };
}

Vec3i_t
vec3i_mul_scalar (Vec3i_t v, int s)
{
  return (Vec3i_t){ v.x * s, v.y * s, v.z * s };
}

Vec4f_t
vec4f_mul_scalar (Vec4f_t v, float s)
{
  return (Vec4f_t){ v.x * s, v.y * s, v.z * s, v.w * s };
}

Vec4i_t
vec4i_mul_scalar (Vec4i_t v, int s)
{
  return (Vec4i_t){ v.x * s, v.y * s, v.z * s, v.w * s };
}

Vec2f_t
vec2f_div_scalar (Vec2f_t v, float s)
{
  return (Vec2f_t){ v.x / s, v.y / s };
}

Vec2f_t
vec2i_div_scalar (Vec2i_t v, int s)
{
  return (Vec2f_t){ (float)v.x / s, (float)v.y / s };
}

Vec3f_t
vec3f_div_scalar (Vec3f_t v, float s)
{
  return (Vec3f_t){ v.x / s, v.y / s, v.z / s };
}

Vec3f_t
vec3i_div_scalar (Vec3i_t v, int s)
{
  return (Vec3f_t){ (float)v.x / s, (float)v.y / s, (float)v.z / s };
}

Vec4f_t
vec4f_div_scalar (Vec4f_t v, float s)
{
  return (Vec4f_t){ v.x / s, v.y / s, v.z / s, v.w / s };
}

Vec4f_t
vec4i_div_scalar (Vec4i_t v, int s)
{
  return (Vec4f_t){ (float)v.x / s, (float)v.y / s, (float)v.z / s,
                    (float)v.w / s };
}

float
vec2f_dot (Vec2f_t a, Vec2f_t b)
{
  return a.x * b.x + a.y * b.y;
}

int
vec2i_dot (Vec2i_t a, Vec2i_t b)
{
  return a.x * b.x + a.y * b.y;
}

float
vec3f_dot (Vec3f_t a, Vec3f_t b)
{
  return a.x * b.x + a.y * b.y + a.z * b.z;
}

int
vec3i_dot (Vec3i_t a, Vec3i_t b)
{
  return a.x * b.x + a.y * b.y + a.z * b.z;
}

float
vec4f_dot (Vec4f_t a, Vec4f_t b)
{
  return a.x * b.x + a.y * b.y + a.z * b.z;
}

int
vec4i_dot (Vec4i_t a, Vec4i_t b)
{
  return a.x * b.x + a.y * b.y + a.z * b.z;
}

float
vec4f_dot_full (Vec4f_t a, Vec4f_t b)
{
  return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

int
vec4i_dot_full (Vec4i_t a, Vec4i_t b)
{
  return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

float
vec2f_cross (Vec2f_t a, Vec2f_t b)
{
  return a.x * b.y - a.y * b.x;
}

int
vec2i_cross (Vec2i_t a, Vec2i_t b)
{
  return a.x * b.y - a.y * b.x;
}

Vec3f_t
vec3f_cross (Vec3f_t a, Vec3f_t b)
{
  return (Vec3f_t){ a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z,
                    a.x * b.y - a.y * b.x };
}

Vec3i_t
vec3i_cross (Vec3i_t a, Vec3i_t b)
{
  return (Vec3i_t){ a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z,
                    a.x * b.y - a.y * b.x };
}

float
vec2f_length (Vec2f_t v)
{
  float len_sq = vec2f_length_squared (v);
  return sqrtf (len_sq);
}

float
vec2i_length (Vec2i_t v)
{
  int len_sq = vec2i_length_squared (v);
  return sqrtf ((float)len_sq);
}

float
vec3f_length (Vec3f_t v)
{
  float len_sq = vec3f_length_squared (v);
  return sqrtf (len_sq);
}

float
vec3i_length (Vec3i_t v)
{
  int len_sq = vec3i_length_squared (v);
  return sqrtf ((float)len_sq);
}

float
vec4f_length (Vec4f_t v)
{
  float len_sq = vec4f_length_squared (v);
  return sqrtf (len_sq);
}

float
vec4i_length (Vec4i_t v)
{
  int len_sq = vec4i_length_squared (v);
  return sqrtf ((float)len_sq);
}

float
vec4f_length_full (Vec4f_t v)
{
  float len_sq = vec4f_length_squared_full (v);
  return sqrtf (len_sq);
}

float
vec4i_length_full (Vec4i_t v)
{
  int len_sq = vec4i_length_squared_full (v);
  return sqrtf ((float)len_sq);
}

float
vec2f_length_squared (Vec2f_t v)
{
  return v.x * v.x + v.y * v.y;
}

int
vec2i_length_squared (Vec2i_t v)
{
  return v.x * v.x + v.y * v.y;
}

float
vec3f_length_squared (Vec3f_t v)
{
  return v.x * v.x + v.y * v.y + v.z * v.z;
}

int
vec3i_length_squared (Vec3i_t v)
{
  return v.x * v.x + v.y * v.y + v.z * v.z;
}

float
vec4f_length_squared (Vec4f_t v)
{
  return v.x * v.x + v.y * v.y + v.z * v.z;
}

int
vec4i_length_squared (Vec4i_t v)
{
  return v.x * v.x + v.y * v.y + v.z * v.z;
}

float
vec4f_length_squared_full (Vec4f_t v)
{
  return v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w;
}

int
vec4i_length_squared_full (Vec4i_t v)
{
  return v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w;
}

Vec2f_t
vec2f_normalize (Vec2f_t v)
{
  float len_sq = vec2f_length_squared (v);
  if (len_sq == 0)
    {
      return (Vec2f_t){ 0.0f, 0.0f };
    }
  float inv_len = 1.0f / sqrtf (len_sq);
  return (Vec2f_t){ v.x * inv_len, v.y * inv_len };
}

Vec2f_t
vec2i_normalize (Vec2i_t v)
{
  int len_sq = vec2i_length_squared (v);
  if (len_sq == 0)
    {
      return (Vec2f_t){ 0, 0 };
    }
  float inv_len = 1.0f / sqrtf ((float)len_sq);
  return (Vec2f_t){ v.x * inv_len, v.y * inv_len };
}

Vec3f_t
vec3f_normalize (Vec3f_t v)
{
  float len_sq = vec3f_length_squared (v);
  if (len_sq == 0)
    {
      return (Vec3f_t){ 0.0f, 0.0f, 0.0f };
    }
  float inv_len = 1.0f / sqrtf (len_sq);
  return (Vec3f_t){ v.x * inv_len, v.y * inv_len, v.z * inv_len };
}

Vec3f_t
vec3i_normalize (Vec3i_t v)
{
  int len_sq = vec3i_length_squared (v);
  if (len_sq == 0)
    {
      return (Vec3f_t){ 0.0f, 0.0f, 0.0f };
    }
  float inv_len = 1.0f / sqrtf ((float)len_sq);
  return (Vec3f_t){ v.x * inv_len, v.y * inv_len, v.z * inv_len };
}

Vec4f_t
vec4f_normalize (Vec4f_t v)
{
  float len_sq = vec4f_length_squared (v);
  if (len_sq == 0)
    {
      return (Vec4f_t){ 0.0f, 0.0f, 0.0f, 0.0f };
    }
  float inv_len = 1.0f / sqrtf (len_sq);
  return (Vec4f_t){ v.x * inv_len, v.y * inv_len, v.z * inv_len, 0.0f };
}

Vec4f_t
vec4i_normalize (Vec4i_t v)
{
  int len_sq = vec4i_length_squared (v);
  if (len_sq == 0)
    {
      return (Vec4f_t){ 0.0f, 0.0f, 0.0f, 0.0f };
    }
  float inv_len = 1.0f / sqrtf ((float)len_sq);
  return (Vec4f_t){ v.x * inv_len, v.y * inv_len, v.z * inv_len, 0.0f };
}

Vec4f_t
vec4f_normalize_full (Vec4f_t v)
{
  float len_sq = vec4f_length_squared_full (v);
  if (len_sq == 0.0f)
    {
      return (Vec4f_t){ 0.0f, 0.0f, 0.0f, 0.0f };
    }
  float inv_len = 1.0f / sqrtf (len_sq);
  return (Vec4f_t){ v.x * inv_len, v.y * inv_len, v.z * inv_len,
                    v.w * inv_len };
}

Vec4f_t
vec4i_normalize_full (Vec4i_t v)
{
  int len_sq = vec4i_length_squared_full (v);
  if (len_sq == 0)
    {
      return (Vec4f_t){ 0.0f, 0.0f, 0.0f, 0.0f };
    }
  float inv_len = 1.0f / sqrtf ((float)len_sq);
  return (Vec4f_t){ v.x * inv_len, v.y * inv_len, v.z * inv_len,
                    v.w * inv_len };
}

Vec2f_t
vec2f_delta (Vec2f_t a, Vec2f_t b)
{
  return (Vec2f_t){ b.x - a.x, b.y - a.y };
}

Vec2i_t
vec2i_delta (Vec2i_t a, Vec2i_t b)
{
  return (Vec2i_t){ b.x - a.x, b.y - a.y };
}

Vec3f_t
vec3f_delta (Vec3f_t a, Vec3f_t b)
{
  return (Vec3f_t){ b.x - a.x, b.y - a.y, b.z - a.z };
}

Vec3i_t
vec3i_delta (Vec3i_t a, Vec3i_t b)
{
  return (Vec3i_t){ b.x - a.x, b.y - a.y, b.z - a.z };
}

Vec4f_t
vec4f_delta (Vec4f_t a, Vec4f_t b)
{
  return (Vec4f_t){ b.x - a.x, b.y - a.y, b.z - a.z, 0.0f };
}

Vec4i_t
vec4i_delta (Vec4i_t a, Vec4i_t b)
{
  return (Vec4i_t){ b.x - a.x, b.y - a.y, b.z - a.z, 0 };
}

Vec4f_t
vec4f_delta_full (Vec4f_t a, Vec4f_t b)
{
  return (Vec4f_t){ b.x - a.x, b.y - a.y, b.z - a.z, b.w - a.w };
}

Vec4i_t
vec4i_delta_full (Vec4i_t a, Vec4i_t b)
{
  return (Vec4i_t){ b.x - a.x, b.y - a.y, b.z - a.z, b.w - a.w };
}

float
vec2f_distance (Vec2f_t a, Vec2f_t b)
{
  Vec2f_t dt = vec2f_delta (a, b);
  return vec2f_length (dt);
}

float
vec2i_distance (Vec2i_t a, Vec2i_t b)
{
  Vec2i_t dt = vec2i_delta (a, b);
  return vec2i_length (dt);
}

float
vec3f_distance (Vec3f_t a, Vec3f_t b)
{
  Vec3f_t dt = vec3f_delta (a, b);
  return vec3f_length (dt);
}

float
vec3i_distance (Vec3i_t a, Vec3i_t b)
{
  Vec3i_t dt = vec3i_delta (a, b);
  return vec3i_length (dt);
}

float
vec4f_distance (Vec4f_t a, Vec4f_t b)
{
  Vec4f_t dt = vec4f_delta (a, b);
  return vec4f_length (dt);
}

float
vec4i_distance (Vec4i_t a, Vec4i_t b)
{
  Vec4i_t dt = vec4i_delta (a, b);
  return vec4i_length (dt);
}

float
vec4f_distance_full (Vec4f_t a, Vec4f_t b)
{
  Vec4f_t dt = vec4f_delta_full (a, b);
  return vec4f_length_full (dt);
}

float
vec4i_distance_full (Vec4i_t a, Vec4i_t b)
{
  Vec4i_t dt = vec4i_delta_full (a, b);
  return vec4i_length_full (dt);
}
