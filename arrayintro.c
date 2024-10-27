#include<stdio.h>
int main()
{
    int a[5],i,num,flag=-1;
    printf("Provide 5 elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Provide a number");
    scanf("%d",&num);
    for(i=0;i<5;i++)
    {
      if(a[i]==num)
      { printf("Element found at %d location",flag+1);
   return 0;}
}
     
    
    
    printf("Not found");
    return 0; 
}