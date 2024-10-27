#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int   *ptr;
    ptr=a;
    printf("%d",ptr);
    printf("\n %d",*ptr);
    ptr=ptr+1;
    printf("\n %d",ptr);
      printf("\n %d",*ptr);
   // printf("%d",sizeof(ptr));
}