#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
int main()
{/*
    int r,n,s;
    setlocale(LC_ALL, "Rus");
    printf("радиус равен=",r);
    scanf("%d",&r);
    printf("окружность равно=%f\n", 2*M_PI*r);
    printf("площадь равна=%f\n",M_PI*pow(r,2));
    return 0;

    int n;
    double f;
    setlocale(LC_ALL, "Rus");
    printf("Введите число n= ");
    scanf("%d", &n);
    f=(((pow((1+sqrt(5))/2,n))-(pow((1-sqrt(5))/2,n)))/sqrt(5));
    printf("Число Фибочинна %d", (int)f);

}
*/
/*
int cub(x)
{
     return pow(x,3);
}
int main()
{
    int x=3;
    setlocale(LC_ALL, "Rus");
    printf("3 в кубе = %d",cub(x));
    return 0;
}
*/
/*int max3(int,int,int);
int main()
{
    setlocale(LC_ALL, "Rus");
    int d,b,c;
printf("Введите число d\n ");
scanf("%d",&d);
printf("Введите число b\n ");
scanf("%d",&b);
printf("Введите число c\n ");
scanf("%d",&c);
printf("Наибольшее число=%d",max3(d,b,c));
return 0;
}
int max3(int d,int b,int c)
{
if (d>b)
{
if (d>c)
{
return d;
}
else if (c>b)
{
return c;
}
}
else if (b>c)
{
return b;
}
else
{
return c;
}
}
*/
    int step2(int);
    int main()
    {
    setlocale(LC_CTYPE,"Rus");
    int b;
    printf("Введи показатель степени: \n");
    scanf("%d",&b);
    printf("2 в степени %d = %d\n",b,step2(b));
    return 0;
    }
    int step2(int p)
    {
    return pow(2,p);
    }





