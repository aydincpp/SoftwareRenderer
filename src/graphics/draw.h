#ifndef DRAW_H
#define DRAW_H

#include "graphics/pixel.h"
#include "platform/framebuffer.h"

// Wrapper for set_pixel
void draw_pixel (Framebuffer *fb, Pixel_t pixel);

#endif /* DRAW_H */
