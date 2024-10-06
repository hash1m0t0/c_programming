#include <stdio.h>

int main(void) {
    printf("----- 後置の場合 -----\n");
    int i = 10;
    printf("i の初期値: %d\n", i);
    int j;
    j = i++;
    printf("i = %d, j = %d\n", i, j);
    printf("----------\n");

    i = 10;
    printf("iの値を初期化しました。\n");
    printf("i = %d\n", i);

    printf("----- 前置の場合 -----\n");
    j = ++i;
    printf("i = %d, j = %d\n", i, j);
}
