#ifndef BRESENHAM_H
#define BRESENHAM_H

void bresenham_init (int x0, int y0, int x1, int y1, int *dx, int *dy, int *sx,
                     int *sy, int *err);
int bresenham_step (int *x0, int *y0, int x1, int y1, int *err, int dx, int dy,
                    int sx, int sy);

#endif /* BRESENHAM_H */
