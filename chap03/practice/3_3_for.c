#include <stdio.h>

int main(void) {
    int sum = 0;
    for (int i = 10; i <= 20; i++) {
        sum += i;
    }
    printf("合計は %d\n", sum);
}
