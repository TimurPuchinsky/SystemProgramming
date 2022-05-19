#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "English");
    char mas[10][21];
    int x=10, y=5;
    int bx=5, by=3;
    char key;
    int sx, sy;
    srand(time(NULL));
    int num = 0;
    do
    {
        sprintf(mas[0],"####################");
    for (int i= 1; i<9; i++)
        sprintf(mas[i],"#                  #");
    sprintf(mas[9],"####################");
    mas [y][x]='@';
    mas [by][bx]=')';
    system("color AE");
    system("cls");
    for (int i=0; i<10;i++)
        printf("%s\n",mas[i]);
        printf("Score: %d",num);

    key = getch();

    sx=x;
    sy=y;
    if (key=='w')y--;
    if (key=='s')y++;
    if (key=='a')x--;
    if (key=='d')x++;
    if (mas[y][x]=='#'){
    x = sx;
    y = sy;
    }
    if (y==by && x==bx){
    by = rand () % 8 + 1;
    bx = rand () % 18 + 1;
    num++;
    }
}
    while (key != 'e');
    {
            return 0;
    }
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <time.h>
//#include <locale.h>
//
//int main()
//{
//char mas [10][21];
//int x=10, y=5;
//int cx, cy;
//int bx=5, by=3;
//char key;
//srand(time(NULL));
//int num = 0;
//do
//{
//sprintf(mas[0],"####################");
//setlocale(LC_ALL, "Russian");
//for (int i=1; i<9;i++)
//sprintf(mas[i],"# #");
//sprintf(mas[9],"####################");
//mas [y][x]='@';
//mas [by][bx]='-';
//system("cls");
//for (int i=0; i<10;i++)
//printf("%s\n",mas[i]);
//printf("%s:%d","Ñ÷¸ò",num);
//key=getch();
//cx=x;
//cy=y;
//setlocale(LC_ALL, "English");
//if (key=='w')y--;
//if (key=='s')y++;
//if (key=='a')x--;
//if (key=='d')x++;
//if (mas[y][x]=='#'){
//x = cx;
//y = cy;
//}
//if (y==by && x==bx){
//by = rand () * 1.0 /RAND_MAX* 8 + 1;
//bx = rand () * 1.0 /RAND_MAX* 18 + 1;
//num++;
//}
//}
//while (key != 'e');
//return 0;
//
//}
