#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    float percentage;
};
int main()
{   struct student s1;
    printf("Provide roll number of student");
    scanf("%d",&s1.rollno);
    printf("\nProvide your name");
    scanf("%s",&s1.name);
    printf("\n Your percentage");
    scanf("%f",&s1.percentage);

    
    printf("roll number=%d",s1.rollno);
    printf("name=");
    puts(s1.name);
 
    printf("percentage =%f",s1.percentage);
}