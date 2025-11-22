#include "platform/framebuffer.h"
#include <stdio.h>
#include <stdlib.h>
#include "graphics/draw.h"

int
main (void)
{
  Framebuffer fb;
  if (!fb_open (&fb, "/dev/fb0"))
    {
      return EXIT_FAILURE;
    }

  if (!fb_get_info (&fb))
    {
      return EXIT_FAILURE;
    }

  if (!fb_map (&fb))
    {
      return EXIT_FAILURE;
    }

  Pixel_t pixel = {
      .pos = {
        .x = fb.vinfo.xres / 2,
        .y = fb.vinfo.yres / 2
      },
      .color = {
        .r = 255,
        .g = 255,
        .b = 0,
        .a = 255
      }
  };
  printf("x: %d\n", pixel.pos.x);
  printf("y: %d\n", pixel.pos.y);

  while (1) {
    draw_pixel(&fb, pixel);
  }

  fb_close (&fb);
  return EXIT_SUCCESS;
}
