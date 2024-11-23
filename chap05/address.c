#include <stdio.h>

int main(void)
{
    int i = 5;
    int *p = &i;

    printf("iのアドレスは %p\n", &i);
    printf("pの値は %p\n", p);
    printf("iの値は %d\n", i);
    printf("*pの値は %d\n", *p);

    double d = 9.9;
    double *pD = &d;
    printf("int *型のポインタのサイズ: %d\n", sizeof(int *));
    printf("double *型のポインタのサイズ: %d\n", sizeof(double *));
}
