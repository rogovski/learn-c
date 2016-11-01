#include <stdio.h>

int main() {
    int x = 1;
    printf("sizeof x: %d\n", sizeof(x));
    printf("sizeof ref x: %d\n", sizeof(&x));
    return 0;
}
