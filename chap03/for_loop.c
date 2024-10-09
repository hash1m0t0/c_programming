#include <stdio.h>

int main(void) {
    // for (int i = 0; i < 5; i++) {
    //     printf("forループ内の処理です\n");
    // }
    // printf("ループ処理を終わりました\n");

    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
        printf("%dを加えました\n", i);
    }
    printf("合計は %d です\n", sum);
}
