#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int x, y, n;
int pls ()
{
    int a = x+y;
    printf("��������: %d\n",a);
}
int minos()
{
    int b = x-y;
    printf("���������: %d\n",b);
}

int del()
{
    int c = x/y;
    printf("�������: %d\n",c);
}

int kompleks()
{
    int d = sqrt (x^2 + y^2);
    printf("������: %d\n",d);
}

int kompleks2()
{
    int i = sqrt(x^2 + y^2);
    int e = i^n;
    printf("����������: %d\n",e);
}

