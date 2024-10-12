#include <stdio.h>

double average(double a, double b, double c) {
    return (a + b + c) / 3;
}

int main(void) {
    double a = 1.5;
    double b = 2.5;
    double c = 3.5;

    printf("%f\n", average(a, b, c));
}
