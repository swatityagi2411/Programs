#include<stdio.h>
int fact(int a)
{
    if(a==0||a==1)
    return 1;
    else
    return (a*fact(a-1));
}

int main()
{
    int num,result;
    printf("Provide a number");
    scanf("%d",&num);
    result=fact(num);
    printf("%d",result);
    return 0;

}