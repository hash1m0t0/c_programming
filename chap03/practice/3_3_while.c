#include <stdio.h>

int main(void) {
    int sum = 0;
    int i = 10;
    while (i <= 20) {
        sum += i;
        i++;
    }
    printf("合計は %d\n", sum);
}
