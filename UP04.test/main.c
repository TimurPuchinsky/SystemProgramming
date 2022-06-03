#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    time_t t;
    char buffer[100];
    struct tm* now;
    t = time(NULL);
    now = gmtime(&t);
    printf("%02d.%02d.%d\n", now -> tm_mday, now -> tm_mon+1, now -> tm_year+1900);
}
