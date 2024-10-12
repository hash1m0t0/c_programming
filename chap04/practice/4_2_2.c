#include <stdio.h>

double rectangle_area(double width, double height) {
    return width * height;
}

int main(void) {
    printf("%.2f\n", rectangle_area(2.5, 1.5));
}
