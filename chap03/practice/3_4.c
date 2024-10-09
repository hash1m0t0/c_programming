#include <stdio.h>

int main(void) {
    int i = 5;

    switch (i) {
    case 1:
        printf("A");
        break;
    case 2:
        break;
    case 3:
        printf("B");
    case 4:
    default:
        printf("C");
    }
}
