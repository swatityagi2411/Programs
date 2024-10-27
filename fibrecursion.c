#include<stdio.h>
int fib(int n)
{    if(n==0) 
return n;
else if(n==1)
        return 1;
else return( fib(n-1) +fib(n-2));
}

int main()
{
    int num,i;
printf(" Provide a count of number for series ");
      scanf("%d",&num);
     for(i=0;i<num;i++)
      printf("  %d",fib(i));
      return 0;
}
