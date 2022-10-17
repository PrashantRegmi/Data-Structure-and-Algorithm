/* Write a menu driven program to implement priority queue using linked list with following operation
Enque,Deque,Display */

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    int priority;
    struct node *next;
};
struct node *top=NULL;
struct node *rear=NULL;
void enque(){
    struct node *new=malloc(sizeof(struct node));
    printf("Enter the data \n");
    scanf("%d",&new->data);
    printf("Enter the priority \n");
    scanf("%d",&new->priority);
    if(top==NULL && rear ==NULL){
        top=new;
        rear=new;
        rear->next=NULL;
        return;
    }
    if(new->priority<top->priority){
        new->next=top;
        top=new;
        rear->next=top;
        return;
    }
    struct node *temp=malloc(sizeof(struct node));
    temp=top;
    while(temp->next!=top && temp->next->priority<new->priority){
        temp=temp->next;
    }
    new->next=temp->next;
    temp->next=new;
    rear=new;
    rear->next=top;
}
void deque(){
    struct node *temp=malloc(sizeof(struct node));
    temp=top;
    if (top==NULL){
        printf("IT IS EMPTY\n");
    }
    else{
        printf("%d\n",temp->data);
    top=top->next;
    rear->next=top;
    free(temp);
}
}
void display(struct node *disp){
    struct node *start;
    start=disp;
    printf("\n");
    printf("The data in the node are: \n");
    while(disp->next!=start){
        printf("%d ",disp->data);
        disp=disp->next;
    }
    printf("%d\n",disp->data);

}
int main(){
int n=7;
    while(n!=4){
    printf("Enter the operation to perform :\n");
    printf("1.Enque\n2.Deque\n3.Display\n4.Exit\n");
    scanf("%d",&n);
    if(n==1){
        enque();
    }
    else if(n==2)
        {deque();
            }
    else if(n==3){
        display(top);
        }
    else if(n==4){ 
        printf("Exit");
        return 0;
        }
    }
}

