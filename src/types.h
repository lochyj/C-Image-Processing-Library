#pragma once

typedef struct vec2 {
    float x;
    float y;
} vec2;

typedef struct pixel {
    int r;
    int g;
    int b;
    int a;
    vec2 location;
} pixel;

typedef void (*func)(char* path);

typedef struct imgt {
    char* name;
    func parser;
} imgt;

typedef struct image {
    char* name;
    char* path;
    char* type;
    int width;
    int height;
    pixel* pixels;
} image;