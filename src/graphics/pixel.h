#ifndef PIXEL_H
#define PIXEL_H

#include "graphics/color.h"
#include "math/vector.h"
#include "platform/framebuffer.h"

typedef struct
{
  Vec2i_t pos;
  Color8_t color;
} Pixel_t;

/* clang-format off */
void
set_pixel (Framebuffer *fb, Vec2i_t pos, Color8_t color);

Color8_t
get_pixel (Framebuffer *fb, Vec2i_t pos);
/* clang-format on */

#endif /* PIXEL_H */
