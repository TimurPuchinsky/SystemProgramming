#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define ADD_DAYS100 100
#define ADD_DAYS500 500
#define ADD_DAYS1000 1000
#define ADD_DAYS5000 5000
#define ADD_DAYS10000 10000

int main()
{
    setlocale(LC_ALL, "Rus");
    time_t t;
    char buffer[100];
    struct tm* now;
    t = time(NULL);
    now = gmtime(&t);
    printf("—егодн€шн€€ дата: %02d.%02d.%d\n", now -> tm_mday, now -> tm_mon+1, now -> tm_year+1900);
//    now->tm_day += ADD_DAYS100;
//    time_t next = mktime(now);
//    now = localtime(&next);
    printf("—егодн€шн€€ дата: %02d.%02d.%d\n", now -> tm_mday, now -> tm_mon+1, now -> tm_year+1900);
}
