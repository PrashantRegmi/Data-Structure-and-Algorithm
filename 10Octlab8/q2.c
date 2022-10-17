// Write a menu driven program to implement queue using linked list with flollowing operations -Enque,Deque,Dispaly.

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enque(){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data :");
    scanf("%d",&new->data);
    new->next=NULL;
    if (front==NULL){
        front=rear=new;
    }
    else{
        rear->next=new;
        rear=new;
    }
}

void deque(){
    struct node *temp;
    temp=front;
    if (front==NULL){
        printf("IT IS EMPTY\n");
    }
    else{
        printf("%d\n",temp->data);
        front=front->next;
        free(temp);
        }
}

void display(){
    struct node *temp;
    temp=front;
    if (front==NULL){
        printf("IT IS EMPTY\n");
    }
    else{
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}

int main(){
    int choice;
    while(1){
        printf(" ENTER OPERATION TO PERFORM\n");
        printf("1.ENQUE 2.DEQUE 3.DISPLAY 4.EXIT\n");
        printf("Enter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:enque();
            break;
            case 2:deque();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default:printf("Enter the correct choice");
        }
    }
}

