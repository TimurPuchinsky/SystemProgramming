#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#define IN "Введите значение: "
//
//int main()
//{
//    system("chcp 1251");
//    printf("%s",IN);
//}

//#define S3(X) X+3
//int main()
//{
//    int X;
//    system("chcp 1251");
//    printf("Введите число: ");
//    scanf("%d",&X);
//    printf("%d",S3(X));
//}

//#define SUMSQ(X,Y) (X*X)+(Y*Y)
//
//int main()
//{
//    int X,Y,c;
//    system("chcp 1251");
//    printf("Введите число X: ");
//    scanf("%d",&X);
//    printf("Введите число Y: ");
//    scanf("%d",&Y);
//    printf("Введите число c: ");
//    scanf("%d",&c);
//    if (SUMSQ(X,Y)==c*c)
//    {
//        printf("треугольник прямоугольный\n");
//    }
//    else printf("треугольник не прямоугольный\n");
//    printf("%d",SUMSQ(X,Y));
//}


void why_me();
int main()
{
    setlocale(LC_ALL,"Rus");
    printf("Дата:%s.\n",__DATE__);
    printf("Время:%s.\n",__TIME__);
    printf("Строка %d.\n",__LINE__);
    why_me();
    return 0;
}
void why_me()
{
    printf("это функция %s.\n",__func__);
    printf("это строка %d.\n",__LINE__);

}



