//Program to calculate factorial
#include<stdio.h>
int main()
{
    int i,fact=1,num;
    printf("provide integer");
    scanf("%d",&num);
    if(num==0) //to check number is zero as factorial will be 1
    { printf("1");
    }
    else if(num<0)//to check number is negative
    {
        printf("Undefined");

    }
    else{
        for(i=1;i<=num;i++)
          {  fact=fact*i; }
          printf("Factorial=%d",fact);
    }
}


















