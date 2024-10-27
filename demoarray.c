#include<stdio.h>
#include<string.h>

int main()
{
    int marks[5],i,count1=0,count2=0;
    printf("Provide values");
    for(i=0;i<5;i++)
    scanf("%d",&marks[i]);

  for(i=0;i<5;i++)
  {
    if(marks[i]<60)
    count2++;
    else
    count1++;
  }
  printf("Cont of Grade A=%d",count1);
  printf("\n Count of Grade B=%d",count2);


}