#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
int main()
{/*
    int r,n,s;
    setlocale(LC_ALL, "Rus");
    printf("������ �����=",r);
    scanf("%d",&r);
    printf("���������� �����=%f\n", 2*M_PI*r);
    printf("������� �����=%f\n",M_PI*pow(r,2));
    return 0;

    int n;
    double f;
    setlocale(LC_ALL, "Rus");
    printf("������� ����� n= ");
    scanf("%d", &n);
    f=(((pow((1+sqrt(5))/2,n))-(pow((1-sqrt(5))/2,n)))/sqrt(5));
    printf("����� ��������� %d", (int)f);

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
    printf("3 � ���� = %d",cub(x));
    return 0;
}
*/
/*int max3(int,int,int);
int main()
{
    setlocale(LC_ALL, "Rus");
    int d,b,c;
printf("������� ����� d\n ");
scanf("%d",&d);
printf("������� ����� b\n ");
scanf("%d",&b);
printf("������� ����� c\n ");
scanf("%d",&c);
printf("���������� �����=%d",max3(d,b,c));
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
    printf("����� ���������� �������: \n");
    scanf("%d",&b);
    printf("2 � ������� %d = %d\n",b,step2(b));
    return 0;
    }
    int step2(int p)
    {
    return pow(2,p);
    }





