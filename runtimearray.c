#include<stdio.h>
/*void printarray(int size)
{
    int a[size];
    int i;
    for(i=0;i<size;i++)
   { scanf("%d",&a[i]);
    printf("%d ",a[i]);
   }
}*/
int main()
{
    int s=5,i;
    int a[5];
    printf("Provide size for an array");
    for(i=0;i<s;i++)
    {scanf("%d",&a[i]);
    //printarray(s);
    printf("%d",a[i]);
    }
}