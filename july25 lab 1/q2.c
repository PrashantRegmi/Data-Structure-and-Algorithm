// Details of a student
#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    int age;
    float cgpa;
} s1[5];

int main(){
    int i;
    for(i=0; i<5; i++){
        printf("\nEnter the student rollno: ");
        scanf("%d", &s1[i].rollno);
        printf("Enter the student name: ");
        scanf("%s", s1[i].name);
        printf("Enter the student age: ");
        scanf("%d", &s1[i].age);
        printf("Enter the student cgpa: ");
        scanf("%f", &s1[i].cgpa);
    }
    for(i=0; i<5; i++){
        printf("Student rollno: %d\n", s1[i].rollno);
        printf("Student name: %s\n", s1[i].name);
        printf("Student age: %d\n", s1[i].age);
        printf("Student cgpa: %f\n", s1[i].cgpa);
    }
    return 0;
}