#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char name[10];
    float marks[5];
};
int main()
{
    struct student stu[5];
    int i,j;
    printf("enter details for five student\n");
    for(i=0;i<5;i++)
    {
        printf("enter the roll no for %d student\n",i+1);
        scanf("%d",&stu[i].roll);
        printf("enter name for %d student\n",i+1);
        scanf("%s",stu[i].name);
        printf("enter the marks for %d students\n",i+1);
        for(j=0;j<5;j++)
        {
            scanf("%f",&stu[i].marks[j]);
        }


    }

    printf("Details for students");
    for(i=0;i<5;i++)
    {
        printf("Detail for %d students\n",i+1);
        printf("roll no %d\n",stu[i].roll);
        printf("name %s\n",stu[i].name);
        for(j=0;j<5;j++)
        printf("marks %f\n",stu[i].marks[j]);


    }

}