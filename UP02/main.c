#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <io.h>
#include <sys/fcntl.h>
#include <sys/stat.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

int main()
{
    int one, two, three, four, five, six, seven, eight, nine, ten;
    int count = 0;
    char namet[1000];

    setlocale(LC_ALL, "Rus");
    FILE *fp;
    fp = fopen("file.txt", "w");
    printf("Имя тестируемого: ");
    scanf("%s", namet);
    fprintf(fp, "Имя тестируемого: %s\n\n", namet);

    printf("Да - 1 / Нет - 2\n\n");

    printf("1+1 = 2: ");
    scanf("%d", &one);

    if (one = 1)
        count += 1;
    else
        count += 0;

    printf("1+2 = 2: ");
    scanf("%d", &two);

    if (two = 2)
        count += 1;
    else
        count += 0;

    printf("1+3 = 4: ");
    scanf("%d", &three);

    if (three = 1)
        count += 1;
    else
        count += 0;

    printf("1+4 = 2: ");
    scanf("%d", &four);

    if (four = 2)
        count += 1;
    else
        count += 0;

    printf("1+5 = 6: ");
    scanf("%d", &five);

    if (five = 1)
        count += 1;
    else
        count += 0;

    printf("1+6 = 7: ");
    scanf("%d", &six);

    if (six = 1)
        count += 1;
    else
        count += 0;

    printf("1+7 = 23: ");
    scanf("%d", &seven);

    if (seven = 2)
        count += 1;
    else
        count += 0;

    printf("1+8 = 9: ");
    scanf("%d", &eight);

    if (eight = 1)
        count -= 1;
    else
        count += 0;

    printf("1+10 = 9: ");
    scanf("%d", &nine);

    if (nine = 2)
        count += 1;
    else
        count += 0;

    printf("1+10 = 11: ");
    scanf("%d", &ten);

    if (ten = 1)
        count += 1;
    else
        count += 0;
    printf("\nКоличество правильных ответов: %d", count);
    fprintf(fp, "Количество правильных ответов: %d", count);
    fclose(fp);
}
