#include <stdio.h>
#include <math.h>
#include <conio.h>


double F (double x)
{
    double f;
    f = log(sin(x));
    return f;
}

int main()
{
    double S = 0, x, a, b, h, e, n;
    a = 2,2;
    b = 3,4;
    n = 16;
    h = (b - a) / n;
    //отрезок [a, b] разобьем на N частей
    x = a;
    while (x < b)
    {
        S = S + 4*F(x);
        x = x + h;
        S = S + 2*F(x);
        x = x + h;
    }
    S = (b - a) / (3*n) *(S + F(a) + F(b));
    printf ("%f", S);
    _getch ();
}
