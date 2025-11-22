#ifndef DRAW_H
#define DRAW_H

#include "graphics/pixel.h"
#include "platform/framebuffer.h"

/* wrapper for set_pixel */
void draw_pixel (Framebuffer *fb, Pixel_t pixel);

/* guess what */
void draw_line  (Framebuffer* fb, Pixel_t start, Pixel_t end);

#endif /* DRAW_H */
