#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#define IN "������� ��������: "
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
//    printf("������� �����: ");
//    scanf("%d",&X);
//    printf("%d",S3(X));
//}

//#define SUMSQ(X,Y) (X*X)+(Y*Y)
//
//int main()
//{
//    int X,Y,c;
//    system("chcp 1251");
//    printf("������� ����� X: ");
//    scanf("%d",&X);
//    printf("������� ����� Y: ");
//    scanf("%d",&Y);
//    printf("������� ����� c: ");
//    scanf("%d",&c);
//    if (SUMSQ(X,Y)==c*c)
//    {
//        printf("����������� �������������\n");
//    }
//    else printf("����������� �� �������������\n");
//    printf("%d",SUMSQ(X,Y));
//}


void why_me();
int main()
{
    setlocale(LC_ALL,"Rus");
    printf("����:%s.\n",__DATE__);
    printf("�����:%s.\n",__TIME__);
    printf("������ %d.\n",__LINE__);
    why_me();
    return 0;
}
void why_me()
{
    printf("��� ������� %s.\n",__func__);
    printf("��� ������ %d.\n",__LINE__);

}



