#include "graphics/draw.h"

void
draw_pixel (Framebuffer *fb, Pixel_t pixel)
{
  set_pixel(fb, pixel.pos, pixel.color);
}
