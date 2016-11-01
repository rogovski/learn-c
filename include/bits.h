#ifndef BITS_H
#define BITS_H

#define SWP(x,y) (x^=y, y^=x, x^=y)

void strrev(char* p);

void intdiv(int a);

char* bitStrRep(int n);

#endif
