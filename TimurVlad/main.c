#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char a, b, c, d;
    setlocale(LC_ALL, "Rus");
    printf("ФИО: ");
    scanf("%s", &a);
    scanf("%s", &b);
    printf("Организация: ");
    scanf("%s", &c);
    printf("Контактный телефон/e-mail: ");
    scanf("%s", &d);

    return 0;
    /*
    int c = 7;
    printf("1 * %d = %d\n", c, 1 * c);
    printf("2 * %d = %d\n", c, 2 * c);
    printf("3 * %d = %d\n", c, 3 * c);
    printf("4 * %d = %d\n", c, 4 * c);
    printf("5 * %d = %d\n", c, 5 * c);
    printf("6 * %d = %d\n", c, 6 * c);
    printf("7 * %d = %d\n", c, 7 * c);
    printf("8 * %d = %d\n", c, 8 * c);
    printf("9 * %d = %d\n", c, 9 * c);
    printf("10 * %d = %d\n", c, 10 * c);

    return 0;
    */
}
