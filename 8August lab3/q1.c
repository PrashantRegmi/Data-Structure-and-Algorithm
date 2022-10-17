// operations in polynomial using array.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct poly{
    int deg;
    int coeff[100];
}p1,p2;

void display(struct poly p){
    int i;
    for(i=p.deg;i>=0;i--){
        printf("%dx^%d  ",p.coeff[i],i);
        if(i>0)
            printf("+ ");
    }
    printf("\n");
}

void insert(struct poly *p){
    int i;
    printf("Enter the power of the polynomial: ");
    scanf("%d",&p->deg);
    for(i=0;i<=p->deg;i++){
        printf("Enter the coefficient of x^%d: ",i);
        scanf("%d",&p->coeff[i]);
    }
}

void add(struct poly p1,struct poly p2){
    int i,j,k;
    struct poly p3;
    p3.deg=p1.deg;
    for(i=0;i<=p1.deg;i++){
        p3.coeff[i]=p1.coeff[i]+p2.coeff[i];
    }
    display(p3);
}

void multiply(struct poly p1,struct poly p2){
    int i,j,k;
    struct poly p3;
    p3.deg=p1.deg+p2.deg;
    for(i=0;i<=p1.deg;i++){
        for(j=0;j<=p2.deg;j++){
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
        printf("\n2. Addition of two polys");
        printf("\n3. Multiplication of two polys");
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