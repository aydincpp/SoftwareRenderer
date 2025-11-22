#ifndef DRAW_H
#define DRAW_H

#include "graphics/pixel.h"
#include "platform/framebuffer.h"

/* wrapper for set_pixel */
void draw_pixel (Framebuffer *fb, Pixel_t p);

/* guess what */
void draw_line  (Framebuffer* fb, Pixel_t p1, Pixel_t p2);

void draw_triangle_fill(Framebuffer* fb, Pixel_t p1, Pixel_t p2, Pixel_t p3);

#endif /* DRAW_H */
