#include<stdio.h>
int HCF(int a,int b)
{
   int min=(a>b)?a:b;
   while(min>0)
   {
    if(a%min==0 && b%min==0)
    break;
    min--;
   }
return min;
}

int LCM(int a,int b,int c)
{
 int lc=(a*b)/c;
 return lc;
}

int main()
{
    int num1,num2,h,l;
    printf("Provide 2 numbers");
    scanf("%d %d",&num1,&num2);
    h=HCF(num1,num2);
    printf("HCF= %d",h);
    l=LCM(num1,num2,h);
    printf("LCM= %d",l);
    return 0;
}