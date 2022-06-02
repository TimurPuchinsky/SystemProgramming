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
    n = 12;
    h = 0.1;
    e = 0.001;
    x = a;
    for(double k = 1; k < n; k++)
    {
        x = x + h;
        S += F(x - h/2)*h;
    }
    printf ("%8.3f", S);
    _getch ();
}
