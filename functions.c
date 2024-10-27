#include<stdio.h>
int factorial(int);
int main()
{
    int result,num;
    printf("Provide the number whose factorial is required\n");
    scanf("%d",&num);
    result=factorial(num);
    printf("%d",result);

    printf("\n %d",factorial(7));
}

int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    { f=f*i; }

    return f;
}