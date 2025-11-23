#ifndef DRAW_H
#define DRAW_H

#include "graphics/pixel.h"
#include "platform/framebuffer.h"

/**
 * Draw a single pixel to the framebuffer.
 */
void draw_pixel (Framebuffer *fb, Pixel_t p);

/**
 * Draw a line between two pixels, with color interpolation.
 */
void draw_line (Framebuffer *fb,
                Pixel_t p0,
                Pixel_t p1);

/**
 * Draws the outline of a triangle by connecting three points.
 */
void draw_triangle_wireframe(Framebuffer* fb, 
                             Pixel_t p0,
                             Pixel_t p1,
                             Pixel_t p2);

/**
 * Draws a filled triangle by rasterizing the area inside the three points.
 */
void draw_triangle_fill (Framebuffer *fb,
                         Pixel_t p0,
                         Pixel_t p1,
                         Pixel_t p2);

#endif /* DRAW_H */
