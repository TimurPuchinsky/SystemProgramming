#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{/*
    setlocale(LC_ALL, "Rus");
    int age;
    printf("age= ");
    scanf("%d", &age);
    age>16?printf("совершеннолетний"):printf("ребенок");
    return 0;
    */
    setlocale(LC_ALL, "Rus");
    int i=1;
    printf("i= ");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("понедельник");
        break;
    case 2:
        printf("вторник");
        break;
    case 3:
        printf("среда");
        break;
    case 4:
        printf("четверг");
        break;
    case 5:
        printf("пятница");
        break;
    case 6:
        printf("суббота");
        break;
    case 7:
        printf("воскресенье");
        break;
        default:
        printf("error");


    }

}

