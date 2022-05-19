#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15

/*
void swap (int *a,int *b)
   {
       int tmp=*a;
       *a=*b;
       *b=tmp;
   }
int main()
{
/*
 int mas[1];
    int i=23;
    mas[0]=i;
    int *p;
    p=&mas;
    printf("%d\n",*p);
    printf("%d\n",i);
    printf("%p\n",&i);
    printf("%p",p);
    return 0;

    float a=4;
    float b=5;
    float *p;
    p=&a;
    *p=a+1;
    p=&b;
    *p=b+1;
    printf("%f\n%f",a,b);

    int c=4;
    int d=5;
    //*a=&c;
    //*b=&d;
    swap(&c,&d);
    printf("%d,%d",c,d);
}*/
//
//int main()
//{
//    srand(time(NULL));
//    int arr[N];
//    for(int i=0; i<N; i++)
//    {
//        *(arr+i)=0+rand()%100;
//        printf("%d,",*(arr+i));
//    }
//    malloc (sizeof(int)*N);
//    arr=(realloc(sizeof(int)+5*N);
//    printf("\n");
//    int max = *arr;
//    for(int i = 1; i< N; i++)
//    if(*(arr+i)>max)max=*(arr+i);
//    printf("%d",max);
//    return 0;
//}


int main()
{


    srand(time(NULL));
    int arr[N];
    malloc(sizeof(int)*N);
    realloc(sizeof(int),5*N);
    for(int i=0; i<N; i++)
    {
    *(arr+i)=0 + rand()%100;
    printf("%d,%p",*(arr+i),(arr+i));
    printf("\n");
    }
    return 0;
}
