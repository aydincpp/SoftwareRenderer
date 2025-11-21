#include "algorithm/bresenham.h"
#include <stdlib.h>

void
bresenham_init (int x0, int y0, int x1, int y1, int *dx, int *dy, int *sx,
                int *sy, int *err)
{
  *dx = abs (x1 - x0);
  *dy = -abs (y1 - y0);
  *sx = x0 < x1 ? 1 : -1;
  *sy = y0 < y1 ? 1 : -1;
  *err = *dx + *dy;
}

int
bresenham_step (int *x0, int *y0, int x1, int y1, int *err, int dx, int dy,
                int sx, int sy)
{
  if (*x0 == x1 && *y0 == y1)
    return 0;

  int e2 = 2 * (*err);

  if (e2 >= dy)
    {
      *err += dy;
      *x0 += sx;
    }

  if (e2 <= dx)
    {
      *err += dx;
      *y0 += sy;
    }

  return 1;
}
