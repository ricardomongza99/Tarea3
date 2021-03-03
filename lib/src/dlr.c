// Archivo: dlr.c
#include <math.h>

float dlr(int x1, int y1, int x2, int y2) {
    float r;
    r = sqrt(pow( (x1 - x2), 2) + pow( (y1 - y2), 2));
    return r;
}
