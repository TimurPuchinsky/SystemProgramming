#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*void main ()
{
    int *mas;
    int a = 0;

    mas = malloc(sizeof(int)*20);

    srand(time(NULL));
    for (int i = 0; i<20; i++)
    {
        *(mas+i) = rand()%101-50;
        printf("%d ", *(mas+i));
    }
    for (int i =0; i<20; i++)
    {
        ((*(mas+i))>0)? : a++;
    }
    printf ("\n%d", a);

    free(mas);
}
*/

/*void main ()
{
    int *mas;

    mas = malloc(sizeof(int)*15);

    srand(time(NULL));
    for (int i = 0; i<15; i++)
    {
        *(mas+i) = rand()%101;
        printf("%d ", *(mas+i));
    }

    mas = realloc(mas, sizeof(int)*20);

    for (int i = 15; i<20; i++)
    {
        *(mas+i) = rand()%101;
        printf("%d ", *(mas+i));
    }


    printf("\n");
    for (int i = 0; i<20; i++)
    {
        printf("%d   %p\n", *(mas+i), (mas+i));
    }
}
*/


/*void main ()
{
    system("chcp 1251");

    for (int i = 224; i<256; i++)
    {
        printf("%d   %c\n", i, i);
    }

    system("chcp 866");

    for (int i = 160; i<176; i++)
    {
        printf("%d   %c\n", i, i);
    }
    for (int i = 224; i<240; i++)
    {
        printf("%d   %c\n", i, i);
    }
}
*/
/*
void main ()
{
    char str [20];

    scanf("%s", &str);

    for (int i = 0; i<20; i++)
    {
        if (str[i]=='T')
        {
            str[i] = 'U';
        }
    }
    printf("%s", str);
}
*/

void main()
{
    setlocale(LC_ALL,"Rus");
    char a[256], b[256];
    printf("Текст: ");
    scanf("%s",a);
    fflush(stdin);
    printf("Слово: ");
    scanf("%s",b);
    if (strstr(a,b) > 0)
    {
        puts("встречается");
    }
    else
    {
        puts("no");
    }
}
////
//void main ()
//{
//    system("chcp 1251");
//    setlocale(LC_CTYPE, "Rus");
//
//    char str1 [25];
//    char str2 [25];
//    char str3 [25];
//
//    gets(str1);
//    gets(str2);
//    gets(str3);
//
//    str1[0] = toupper(str1[0]);
//    str2[0] = toupper(str2[0]);
//    str3[0] = toupper(str3[0]);
//
//    printf("%s%s%s", str1,str2,str3);
//}

/*void main ()
{
    system("chcp 1251");
    setlocale(LC_CTYPE, "Rus");

    char str1 [25];
    char str2 [25];
    int num;

    gets(str1);
    scanf("%s", str2);

    printf("%d", strstr(str1, str2));
}*/
/*
int main()
{
setlocale(LC_ALL,"Rus");
char log[256],pas[256];
printf("Введите логин:\n");
scanf("%s",log);
if (strcmp(log,"admin")==0)
{
    printf("Введите пароль:\n");
    scanf("%s",pas);
    if(strcmp(pas,"password")==0)
{
    puts("Доступ открыт");
}
    else puts("Неверный пароль");
}
    else
    puts("Вы не зарегистрированы в системе");
}
*/
