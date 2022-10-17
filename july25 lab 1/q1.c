/*WAP to store employee details such as empid, ename,age and salary of an 
employee using structure and display the same */

#include <stdio.h>

struct employee
{
    int empid;
    char ename[20];
    int age;
    int salary;
} e1;

int main()
{
    printf("Enter the employee id: ");
    scanf("%d", &e1.empid);
    printf("Enter the employee name: ");
    scanf("%s", &e1.ename);
    printf("Enter the employee age: ");
    scanf("%d", &e1.age);
    printf("Enter the employee salary: ");
    scanf("%d", &e1.salary);
    printf("\n The Employee id is : %d\n", e1.empid);
    printf("The Employee name is : %s\n", e1.ename);
    printf("The Employee age is: %d\n", e1.age);
    printf("The Employee salary is: %d\n", e1.salary);
    return 0;
}
