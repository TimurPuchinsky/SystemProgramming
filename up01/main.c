#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "biblioteca.c"
#include "biblioteca.h"
int main()
{
    setlocale(LC_ALL,"Rus");
    x = 5;
    y = 10;
    n = 2;
    pls();
    minos();
    del();
    kompleks();
    kompleks2();
}
