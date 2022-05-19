#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>

//struct magaz
//{
//    char tovar[20];
//    int price;
//    int amount;
//    int a;
//}mathem,*pon;
//int main()
//{
//    setlocale(LC_CTYPE,"Russian");
//    strcpy(mathem.tovar,"книга");
//    mathem.price = 100;
//    mathem.amount = 3;
//    mathem.a = mathem.price*mathem.amount;
//    pon=&mathem;
//    printf("товар: %s - цена: %d - количество: %d - стоимость: %d\n", pon->tovar,pon->price,pon->amount,pon->a);
//}


//int main()
//{
//    setlocale(LC_ALL,"Russian");
//    time_t tim;
//    char buffer[100];
//    struct tm*now;
//    tim=time(NULL);
//    now = localtime(&tim);
//    strftime(buffer, 100, "%d %B,%A\n",now);
//    printf("%s",buffer);
//    strftime(buffer, 100, "текущее время: %I:%M\n",now);
//    printf("%s",buffer);
//}
//
void wait(int sec)
{
    clock_t end_wait=(clock()+(sec*CLOCKS_PER_SEC));
    while (clock()<end_wait){}
}
int main()
{
    char p;
    time_t v1,v2;
    v1 = time(NULL);
    wait(10);
    v1 = time(NULL);
    if (p != 'p')
    {
        printf("stop",difftime(v2,v1));
    }
    return 0;
}
//struct examen
//{
//char family[20];
//int rost;
//} s, *pon;
//
//int main()
//{
//        setlocale(LC_CTYPE,"Russian");
//        pon = &s;
//
//
//    struct examen klass[20];
//    strcpy(klass[0].family,"Аристов");
//    klass[0].rost = 173;
//    strcpy(klass[1].family,"Татаринов");
//    klass[1].rost = 193;
//    strcpy(klass[2].family,"Большаков");
//    klass[2].rost = 190;
//    strcpy(klass[3].family,"Путин");
//    klass[3].rost = 167;
//    strcpy(klass[4].family,"Пучинский");
//    klass[4].rost = 183;
//int e = (klass[0].rost+klass[1].rost+klass[2].rost+klass[3].rost+klass[4].rost)/5;
//printf("Средний рост группы: %d\n", e );
//return 0;
//}

//void wait(int sec)
//{
//    clock_t end_wait=(clock()+(sec*CLOCKS_PER_SEC));
//    while (clock()<end_wait){}
//}
//int main()
//{
//    for (int i=0; i>=-1; i++)
//    {
//        printf("%i\n",i);
//        wait(1);
//    }
//    while (key != 'e')
//    {
//            return 0;
//    }
//}

//int main()
//{
//    int start, end;
//    int ms= 0;
//    int ns= 0;
//    int sec=0 , min=0 , hrs=0;
//    start = clock ();
//    char p= 'p';
//    while (1)
//    {
//        end = clock ();
//        ns= end - start;
//        ms = ns / 10;
//        if (ms>100)
//        {
//            sec = sec + 1;
//            ms= ms - 100;
//            start= end;
//        }
//        if (sec > 59)
//        {
//            min = min+1;
//            sec= 0;
//        }
//        if (min > 59)
//        {
//            hrs = hrs + 1;
//            min=0;
//        }
//        printf ("%d:%d:%d.%d\n",hrs, min, sec, ms );
//    }
//    if(kbhit()) //--Check if any button is pressed on keyboard--//
//    {
//        if(p==getch()) //--Check if P is pressed--//
//        {
//            system("pause"); //--Inbuilt function for pause and resume--//
//        }
//    }
//}

