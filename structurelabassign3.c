#include<stdio.h>
#include<conio.h>
struct employee
{
    int id;
    char name[10];
    int age;
    float bs;
    float gross;

};
int main()
{
    printf("enter the no of an employee\n");
    int n;
    scanf("%d",&n);

    struct employee es[n];

    printf("enter the details of an employee\n");
    for(int i=0;i<n;i++)
    {
        printf("enter id :\n ");
        scanf("%d",&es[i].id);
        printf("enter name :\n");
        scanf("%s",es[i].name);
        printf("enter age :\n");
        scanf("%d",&es[i].age);
        printf("enter base salaray :\n");
        scanf("%f",&es[i].bs);
    }
    for(int i=0;i<n;i++)
    {
        es[i].gross= es[i].bs+es[i].bs*.8+es[i].bs*.1;
     
    

    }
    printf("Details for employees\n");
    for(int i=0;i<n;i++)
    {
        printf("details for %d no of employee\n",i+1);
        printf("id no. %d\n",es[i].id);
        printf("name %s\n",es[i].name);
        printf("age %d\n",es[i].age);
        printf("salary %f\n",es[i].bs);
        printf(" Gross  %f\n",es[i].gross);

    }

    
}