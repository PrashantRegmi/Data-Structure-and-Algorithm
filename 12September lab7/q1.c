// WAP in C to implement stack using linked list with the operation as push0,pop() and display().

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
void push(){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data :");
    scanf("%d",&new->data);
    new->next=top;
    top=new;
}
void pop(){
    struct node *temp;
    temp=top;
    if (top==NULL){
        printf("IT IS EMPTY");
    }
    else{
        printf("The data is %d\n",temp->data);
        top=top->next;
        free(temp);
        }
};

void display(){
    struct node *temp;
    temp=top;
    if (top==NULL){
        printf("IT IS EMPTY");
    }
    else{
        while(temp!=NULL){
            printf("The data is %d\n",temp->data);
            temp=temp->next;
        }
    }
}
int main(){
    int ch;
    while(1){
        printf("Enter the operation to operate :\n");
         printf("1.Push\t 2.POP\t3.Display\t4.Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:
            printf("Thank you\n");
            exit(0);
            break;
            default:printf("Invalid choice\n");
        }
    }
}