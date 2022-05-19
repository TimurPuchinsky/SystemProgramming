#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //int a = 10, b = 5;
    //int c, d, e, f, g;
    //printf("a = 10, b = 5\n");
    //printf("10 + 5 = %d\n", a + b);
    //printf("10 - 5 = %d\n", a - b);
    //printf("10 * 5 = %d\n", a * b);
    //printf("10 / 5 = %d\n", a / b);
    //printf("10 % 5 = %d\n", a % b);
    //return 0;
/*
    float a, b;
    printf("a= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    printf("%.3f + %.3f = %.3f\n", a, b, a + b);
    printf("%.3f - %.3f = %.3f\n", a, b, a - b);
    printf("%.3f * %.3f = %.3f\n", a, b, a * b);
    printf("%.3f / %.3f = %.3f\n", a, b, a / b);
    return 0;
*/
/*int a, b;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("%#x + %#x = %#x\n", a, b, a + b );
    printf("%.3f - %.3f = %.3f\n", a, b, a - b);
    printf("%.3f * %.3f = %.3f\n", a, b, a * b);
    printf("%.3f / %.3f = %.3f\n", a, b, a / b);
    return 0;
*/



    //setlocale(LC_CTYPE, "Rus");
    //int a, d, r,q;
    printf("Введите два числа:\n");
    scanf("%d %d", &a, &d);
    r=a/d;
    q=a%d;
    printf("Результат деления %d на %d равен: %d\n", a, d, r);
    printf("Остаток от деления %d на %d равен: %d\n", a, d, q);
    return 0;

}
//

