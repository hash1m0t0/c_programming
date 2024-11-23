#include <stdio.h>

int main(void)
{
    int i = 5;
    int *p = &i;

    int j = *p;  // j = iと同じように働く
    printf("jの値は %d\n", j);

    *p = 10;  // i = 10と同じように働く
    printf("iの値は %d\n", i);
}
