#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{/*
    setlocale(LC_ALL, "Rus");
    int age;
    printf("age= ");
    scanf("%d", &age);
    age>16?printf("����������������"):printf("�������");
    return 0;
    */
    setlocale(LC_ALL, "Rus");
    int i=1;
    printf("i= ");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("�����������");
        break;
    case 2:
        printf("�������");
        break;
    case 3:
        printf("�����");
        break;
    case 4:
        printf("�������");
        break;
    case 5:
        printf("�������");
        break;
    case 6:
        printf("�������");
        break;
    case 7:
        printf("�����������");
        break;
        default:
        printf("error");


    }

}

