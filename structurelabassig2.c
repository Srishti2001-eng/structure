#include<stdio.h>
#include<conio.h>

int n=10;
struct student
{
    int roll;
    float total,percentage;
    char name[20];
    int marks[5];
}s[10];

void total()
{
    for(int i=0;i<n;i++)
    {
        s[i].total=0;
        for(int j=0;j<5;j++)
        {
           s[i].total+=s[i].marks[j]; 
        }
        s[i].percentage=s[i].total/5;
    
    }
}

void display()
{
    int input;
    printf("enter roll no:\n");
    scanf("%d",&input);
    for(int i=0;i<n;i++)
    {
        if (input==s[i].roll)
        {
            printf("Details of students are:\nName: %s\nRoll: %d\n", s[i].name,s[i].roll);
            for(int j=0;j<5;j++)
            printf("\nMarks of subject %d=%d",i+1,s[i].marks[j]);

        }
    }
}


void range()
{
    total();
    int up=100,low=0,chk=0;
    printf("enter the upper and lower limit\n");
    scanf("%d\n%d", &up,&low);
    for(int i=0;i<n;i++)
    {
        if(up>=s[i].percentage  && low<=s[i].percentage)
        {
            printf("Details of students are:\nName: %s\nRoll: %d\n", s[i].name,s[i].roll);
            for(int j=0;j<5;j++)
            printf("\nMarks of subject %d=%d",j+1,s[i].marks[j]);
            printf("\n percentage: %d",s[i].percentage);


        }
    }
}

void main()
{
    printf("enter the number of an students\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\n enter the details of students:\n");
        printf("enter name:\n");
        scanf("%s",s[i].name);
        printf("enter the roll:\n");
        scanf("%d",&s[i].roll);
        printf("enter the marks of 5 subjct:\n ");
        for(int j=0;j<5;j++)
        scanf("%d",&s[i].marks[j]);
    }
    total();
    display();
    range();
}




