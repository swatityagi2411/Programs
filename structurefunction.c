#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    float percentage;
};
void print(struct student s)
{
    printf("roll number=%d",s.rollno);
    printf("name=");
    puts(s.name);
    printf("\n percentage = %f",s.percentage);
}
int main()
{   struct student s1;

    printf("Provide roll number of student");
    scanf("%d",&s1.rollno);
    printf("\nProvide your name");
    scanf("%s",&s1.name);
    printf("\n Your percentage");
    scanf("%f",&s1.percentage);

    print(s1);
    }


    
    
