#include <stdio.h>

int absolute_value(int value) {
    if (value < 0) {
        value *= -1;
    }
    return value;
}

int main(void) {
    int a = 5;
    int b = -3;

    printf("%d\n",absolute_value(a));
    printf("%d\n",absolute_value(b));
}
