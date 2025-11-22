#include "graphics/draw.h"
#include "algorithm/bresenham.h"
#include "math/utils.h"
#include <stdlib.h>

void
draw_pixel (Framebuffer *fb, Pixel_t pixel)
{
  set_pixel (fb, pixel.pos, pixel.color);
}

void
draw_line (Framebuffer *fb, Pixel_t start, Pixel_t end)
{
  /* starting and ending coordinates */
  int x0 = start.pos.x;
  int y0 = start.pos.y;
  int x1 = end.pos.x;
  int y1 = end.pos.y;

  /* variables used by bresenham's algorithm */
  int dx, dy, sx, sy, err;

  /* initialize bresenham algorithm state */
  bresenham_init (x0, y0, x1, y1, &dx, &dy, &sx, &sy, &err);

  /* euclidean distance between start and end points */
  float length = vec2i_distance (start.pos, end.pos);

  /* special case where start and end are the same pixel */
  if (length == 0.0f)
    {
      draw_pixel (fb, start);
      return;
    }

  /* number of steps which is the length of the dominant axis */
  int steps = abs (x1 - x0) > abs (y1 - y0) ? abs (x1 - x0) : abs (y1 - y0);

  /* interpolation increment per pixel step */
  float dt = steps > 0 ? 1.0f / steps : 1.0f;

  /* interpolation value */
  float t = 0.0f;

  /* loop through each pixel position on the line */
  for (;;)
    {
      Pixel_t p;
      p.pos.x = x0;
      p.pos.y = y0;

      /* interpolate each color channel base on the current t */
      p.color.r = math_lerpi (start.color.r, end.color.r, t);
      p.color.g = math_lerpi (start.color.g, end.color.g, t);
      p.color.b = math_lerpi (start.color.b, end.color.b, t);
      p.color.a = math_lerpi (start.color.a, end.color.a, t);

      /* draw the pixel */
      draw_pixel (fb, p);

      /* advance to the next pixel and break if it reached end */
      if (!bresenham_step (&x0, &y0, x1, y1, &err, dx, dy, sx, sy))
        break;

      t += dt;
      if (t > 1.0f)
        t = 1.0f;
    }
}
