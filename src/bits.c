
#include <stdio.h>
#include <math.h>
#include <bits.h>

void intdiv(int a) {
    printf("%s\n", "************");
    printf("%d\n", sizeof(a / 2));
    printf("%d\n", a / 2 );
}

void strrev(char *p) {
    char *q = p;
    while(q && *q) ++q; /* find eos */
    for(--q; p < q; ++p, --q) SWP(*p, *q);
}

char * bitStrRep(int n) {
    char str[64] = {};
    int currPos = 0;

    int k = n;
    int res = k / 2;
    int rem = k % 2;

    str[currPos] = rem == 1 ? '1' : '0';
    if(res == 0 || res == 1) {
        str[currPos + 1] = res == 1 ? '1' : '0';
        strrev(str);
        return str;
    }
    currPos++;

    while (1) {

        k = res;
        res = k / 2;
        rem = k % 2;

        str[currPos] = rem == 1 ? '1' : '0';
        if(res == 0 || res == 1) {
            str[currPos + 1] = res == 1 ? '1' : '0';
            strrev(str);
            return str;
        }
        currPos++;

        printf("%s %d\n", "it: ", currPos);
    }
}
