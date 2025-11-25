#ifndef COLOR_H
#define COLOR_H

#include <stdint.h>

/**
 * @struct Color8_t
 * @brief Represents a color with 8-bit RGBA channels.
 */
typedef struct
{
  uint8_t r; /**< Red channel   (0-255) */
  uint8_t g; /**< Green channel (0-255) */
  uint8_t b; /**< Blue channel  (0-255) */
  uint8_t a; /**< Alpha channel (0-255) */
} Color8_t;

/**
 * @brief Convert an array of 4 floats (RGBA) in [0.0f..1.0f] range to Color8_t.
 *
 * Each float component is clamped and converted to an 8-bit integer.
 *
 * @param rgba Pointer to 4-element float array representing red, green, blue, alpha.
 * @return Color8_t with each channel in [0..255].
 */
Color8_t
float4_to_color8(const float *rgba);

/**
 * @brief Scale an 8-bit color channel value to a bitfield of given length.
 *
 * Used for packing color channels into framebuffer pixel format.
 *
 * @param value  8-bit channel value (0-255).
 * @param length Number of bits in the target channel.
 * @return Scaled channel value fitting in 'length' bits.
 */
uint32_t
scale_channel(uint8_t value, int length);

/**
 * @brief Expand a bitfield channel value to 8-bit range.
 *
 * Used for unpacking framebuffer pixel format into 8-bit color channel.
 *
 * @param value   Channel value to expand.
 * @param length  Number of bits in the input channel.
 * @return Expanded 8-bit channel value (0-255).
 */
uint8_t
expand_channel(uint32_t value, int length);

/**
 * @brief Pack a Color8_t into a 32-bit framebuffer pixel value.
 *
 * Uses the provided bit offsets and lengths for each channel.
 *
 * @param c Color to pack.
 * @param r_offset Bit  offset  of  red     channel.
 * @param r_length Bit  length  of  red     channel.
 * @param g_offset Bit  offset  of  green   channel.
 * @param g_length Bit  length  of  green   channel.
 * @param b_offset Bit  offset  of  blue    channel.
 * @param b_length Bit  length  of  blue    channel.
 * @param a_offset Bit  offset  of  alpha   channel.
 * @param a_length Bit  length  of  alpha   channel.
 * @return Packed 32-bit pixel value.
 */
uint32_t
pack_fb_color(Color8_t c,
              int r_offset, int r_length,
              int g_offset, int g_length,
              int b_offset, int b_length,
              int a_offset, int a_length);

/**
 * @brief Unpack a 32-bit framebuffer pixel value into a Color8_t.
 *
 * Uses the provided bit offsets and lengths for each channel.
 *
 * @param value Packed 32-bit pixel value.
 * @param r_offset Bit  offset   of  red     channel.
 * @param r_length Bit  length   of  red     channel.
 * @param g_offset Bit  offset   of  green   channel.
 * @param g_length Bit  length   of  green   channel.
 * @param b_offset Bit  offset   of  blue    channel.
 * @param b_length Bit  length   of  blue    channel.
 * @param a_offset Bit  offset   of  alpha   channel.
 * @param a_length Bit  length   of  alpha   channel.
 * @return Unpacked Color8_t.
 */
Color8_t
unpack_fb_color(uint32_t value,
                int r_offset, int r_length,
                int g_offset, int g_length,
                int b_offset, int b_length,
                int a_offset, int a_length);

#endif /* COLOR_H */
