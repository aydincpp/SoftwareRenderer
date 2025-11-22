#include "graphics/draw.h"
#include "platform/framebuffer.h"
#include <stdio.h>
#include <stdlib.h>

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

  // test: drawing a line
  Pixel_t start = { .pos = { .x = fb.vinfo.xres / 2, .y = fb.vinfo.yres / 2 },
                    .color = { .r = 0, .g = 255, .b = 0, .a = 255 } };

  Pixel_t end = { .pos = { .x = fb.vinfo.xres / 2 + 300,
                           .y = fb.vinfo.yres / 2 + 300 },
                  .color = { .r = 255, .g = 0, .b = 0, .a = 255 } };

  while (1)
    {
      draw_line (&fb, start, end);
    }

  fb_close (&fb);
  return EXIT_SUCCESS;
}
