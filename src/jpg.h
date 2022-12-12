#include <stdio.h>

#pragma once

/** JPEG file format encoding
 * 0xFF 0xD8 Start of image
 * 0xFF 0xC0 Start of frame
 * 0xFF 0xC4 Huffman table
 * 0xFF 0xDB Quantization table
 * 0xFF 0xDD Restart interval
 * 0xFF 0xDA Start of scan
 * 0xFF 0xD9 End of image
 * 0xFF 0xFE Comment
 */

void jpg_decode(FILE* file) {
    unsigned char buffer[2];

    fread(buffer, 1, 2, file);

    if (buffer[0] != 0xFF || buffer[1] != 0xD8) printf("Not a JPEG file");

    
    
}