#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <locale.h>

void main()
{
    setlocale(LC_CTYPE, "Russian_Russia.1251");

    int calendar[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } ;
    int dayBeg, monthBeg, yearBeg;
    int dayEnd, monthEnd, yearEnd;
    int quantity = 365;
    int daycount = 0;
    int monthcount = 0;
    int yearcount = 0;
    int count = 0;

    printf("\n");
    printf(" ¬ведите число рождени€: "); scanf("%d", &dayBeg);
    printf(" ¬ведите мес€ц рождени€: "); scanf("%d", &monthBeg);
    printf(" ¬ведите год рождени€: "); scanf("%d", &yearBeg);
    printf("\n");
    printf(" ¬ведите сегодн€шнее число: "); scanf("%d", &dayEnd);
    printf(" ¬ведите текущий мес€ц: "); scanf("%d", &monthEnd);
    printf(" ¬ведите текущий год: "); scanf("%d", &yearEnd);
    printf("\n");

//    if (daybeg <= 31)
//        daycount = daybeg;
//        while (daycount <= 31)
//            daycount = daycount + 1;
//            count++;
//        if (daycount = 31)
//            daycount -= 31;
//            if (monthBeg <= 12 && daycount = 0)
//                monthcount = monthBeg + 1;
//            else yearcount = yearBeg + 1;
//    else monthcount = monthBeg + 1;


    for (int yearNext = yearBeg; yearNext < yearEnd; yearNext++)
    {
        quantity += 365;
        if (yearNext % 4 != 0) continue;
        else if (yearNext % 400 == 0)
        {
            quantity++;
            continue;
        }
        else if (yearNext % 100 == 0) continue;
        else quantity++;
        }
    for (int next = 0; next < monthBeg; next++) quantity -= calendar[next];
    quantity -= dayBeg;
    for (int future = 11; future >= monthEnd; future--) quantity -= calendar[future];
    quantity += dayEnd;
    if (yearEnd % 100 == 0 && monthEnd < 3 && dayEnd < 29) quantity--;

    printf("  оличество прожитых дней = %d", quantity);
    _getch();
}
