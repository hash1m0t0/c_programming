#include <stdio.h>

void print_hello(int count) {
    for (int i = 0; i < count; i++) {
        printf("Hello\n");
    }
}

int main(void) {
    print_hello(3);
}
