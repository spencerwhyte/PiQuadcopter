#include "convert_to_greyscale.h"

#include "greyscale_image.h"
#include "rgb_image.h"

#include <stdio.h>

void convert_to_greyscale(rgb_image *rgb_buffer, greyscale_image *gs_buffer)
{

    for (int x = 0; x < rgb_buffer->width; x++)
    {
        for (int y = 0; y < rgb_buffer->height; y++)
        {
            rgb_pixel rgb = get_rgb_pixel(rgb_buffer, x, y);
            greyscale_pixel grey;
            grey.pixel = UINT16_MAX * (rgb.red + rgb.green + rgb.blue) / (3 * UINT8_MAX);
            set_greyscale_pixel(gs_buffer, x, y, grey);  
        }
    }
}
