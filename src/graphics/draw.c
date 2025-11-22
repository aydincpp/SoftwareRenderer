#include "graphics/draw.h"
#include "algorithm/bresenham.h"

void
draw_pixel (Framebuffer *fb, Pixel_t pixel)
{
  set_pixel (fb, pixel.pos, pixel.color);
}

void
draw_line (Framebuffer *fb, Pixel_t start, Pixel_t end)
{
}
