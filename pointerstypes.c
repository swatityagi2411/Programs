#include<stdio.h>
int main()
{
   /* void *ptr;
    int a=23;
    ptr=&a;
    printf("%d   %d",*(int*)ptr,&a);
    printf("\nSize of ptr=%d",sizeof(ptr));*/

    /*int *ptr,a=23;//wild pointer
    printf("%d   %d",ptr,&a);*/

    /*int *ptr=NULL,a=23;//NULL pointer
    printf("%d  %d",ptr,&a);*/


    /*const int *ptr;//pointer to constant
    int a=23;
    ptr=&a;
    printf(" %d  %d",ptr,*ptr);
    ptr++;
    (*ptr)++;
    printf("\n %d  %d",ptr,*ptr);*/


 int const *ptr;//pointer to constant
    int a=23;
    ptr=&a;
    printf(" %d  %d",ptr,*ptr);
    ptr++;
    (*ptr)++;
    printf("\n %d  %d",ptr,*ptr+1);

}