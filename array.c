#include<stdio.h>
int main()
{
    int a[10],i,ele,flag=-1;
    printf("Provide 10 values");
for(i=0;i<10;i++)
{
  scanf("%d",&a[i]);
  
}
printf("Enter element to search for");
scanf("%d",&ele);
for(i=0;i<10;i++)
{
  if(a[i]==ele)
  { flag=i;
  break;
  }
  
}
if(flag==-1)
printf("Not found");
else
printf("\nPresent at %d index",flag);

}