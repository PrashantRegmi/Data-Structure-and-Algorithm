
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct polynomial{
    int degree;
    int coeff[100];
}p1,p2;

void display(struct polynomial p){
    int i;
    for(i=p.degree;i>=0;i--){
        printf("%dx^%d  ",p.coeff[i],i);
        if(i>0)
            printf("+ ");
    }
    printf("\n");
}

void insert(struct polynomial *p){
    int i;
    printf("Enter the degree of the polynomial: ");
    scanf("%d",&p->degree);
    for(i=0;i<=p->degree;i++){
        printf("Enter the coefficient of x^%d: ",i);
        scanf("%d",&p->coeff[i]);
    }
}

void add(struct polynomial p1,struct polynomial p2){
    int i,j,k;
    struct polynomial p3;
    p3.degree=p1.degree;
    for(i=0;i<=p1.degree;i++){
        p3.coeff[i]=p1.coeff[i]+p2.coeff[i];
    }
    display(p3);
}

void multiply(struct polynomial p1,struct polynomial p2){
    int i,j,k;
    struct polynomial p3;
    p3.degree=p1.degree+p2.degree;
    for(i=0;i<=p1.degree;i++){
        for(j=0;j<=p2.degree;j++){
            p3.coeff[i+j]+=p1.coeff[i]*p2.coeff[j];
        }
    }
    display(p3);
}

int main(){
    insert(&p1);
    insert(&p2);
    int choice;
    do{
        printf("\n1. Displaying the values");
        printf("\n2. Addition of two polynomials");
        printf("\n3. Multiplication of two polynomials");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                display(p1);
                display(p2);
                break;
            case 2:
                add(p1,p2);
                break;
            case 3:
                multiply(p1,p2);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nInvalid choice");
                break;
        }
    }while(choice!=4);
    return 0;
}