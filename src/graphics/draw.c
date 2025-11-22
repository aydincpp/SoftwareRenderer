#include "graphics/draw.h"
#include "algorithm/bresenham.h"
#include "math/utils.h"
#include <stdlib.h>

void
draw_pixel (Framebuffer *fb, Pixel_t p)
{
  set_pixel (fb, p.pos, p.color);
}

void
draw_line (Framebuffer *fb, Pixel_t p1, Pixel_t p2)
{
  /* starting and ending coordinates */
  int x1 = p1.pos.x;
  int y1 = p1.pos.y;
  int x2 = p2.pos.x;
  int y2 = p2.pos.y;

  /* variables used by bresenham's algorithm */
  int dx, dy, sx, sy, err;

  /* initialize bresenham algorithm state */
  bresenham_init (x1, y1, x2, y2, &dx, &dy, &sx, &sy, &err);

  /* euclidean distance between start and end points */
  float length = vec2i_distance (p1.pos, p2.pos);

  /* special case where start and end are the same pixel */
  if (length == 0.0f)
    {
      draw_pixel (fb, p1);
      return;
    }

  /* number of steps which is the length of the dominant axis */
  int steps = abs (x2 - x1) > abs (y2 - y1) ? abs (x2 - x1) : abs (y2 - y1);

  /* interpolation increment per pixel step */
  float dt = steps > 0 ? 1.0f / steps : 1.0f;

  /* interpolation value */
  float t = 0.0f;

  /* loop through each pixel position on the line */
  for (;;)
    {
      Pixel_t p;
      p.pos.x = x1;
      p.pos.y = y1;

      /* interpolate each color channel base on the current t */
      p.color.r = math_lerpi (p1.color.r, p2.color.r, t);
      p.color.g = math_lerpi (p1.color.g, p2.color.g, t);
      p.color.b = math_lerpi (p1.color.b, p2.color.b, t);
      p.color.a = math_lerpi (p1.color.a, p2.color.a, t);

      /* draw the pixel */
      draw_pixel (fb, p);

      /* advance to the next pixel and break if it reached end */
      if (!bresenham_step (&x1, &y1, x2, y2, &err, dx, dy, sx, sy))
        break;

      t += dt;
      if (t > 1.0f)
        t = 1.0f;
    }
}
