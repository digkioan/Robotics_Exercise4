#include <stdio.h>

int main() {
    float x1, y1, x2, y2, xr, yr;
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &xr, &yr);

    float dx = x2 - x1;
    float dy = y2 - y1;
    float rx = xr - x1;
    float ry = yr - y1;
    float dot_rv = rx * dx + ry * dy;
    float dot_vv = dx * dx + dy * dy;

    if (dot_vv == 0) {


        if (rx == 0 && ry == 0) {
            printf("inside\n");
        } else {
            printf("previous\n");
        }


    } else {


        float u = dot_rv / dot_vv;
        if (u < 0) {
            printf("previous\n");
        } else if (u > 1) {
            printf("next\n");
        } else {
            printf("inside\n");
        }


    }

    return 0;
}