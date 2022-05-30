#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pls (int x, int y)
{
    int a = x+y;
    printf("%d\n",a);
}
int minos(int x, int y)
{
    int b = x-y;
    printf("%d\n",b);
}

int del(int x, int y)
{
    int c = x/y;
    printf("%d\n",c);
}

int kompleks(int x, int y)
{
    int d = sqrt (x^2 + y^2);
    printf("%d\n",d);
}

int kompleks2(int x, int y, int n)
{
    int i = sqrt(x^2 + y^2);
    int e = i^n;
    printf("%d\n",e);
}

