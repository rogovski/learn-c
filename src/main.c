#include <stdio.h>

// https://www.tutorialspoint.com/cprogramming/c_strings.htm

int main() {
    char c = 'z';
    char x[5] = {'a', 'b', 'c', 'd', '\0'};
    printf("sizeof c: %d\n", sizeof(c));
    printf("sizeof ref c: %d\n", sizeof(&c));
    printf("sizeof x: %d\n", sizeof(x));
    printf("sizeof ref x: %d\n", sizeof(&x));
    return 0;
}
