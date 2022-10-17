//menu driven operation in circular linked list for traversal,insertion, deletion and display

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void creation(struct node*ptr){
    int n,i=1;
    printf("Enter the number of elements in the list : \n");
    scanf("%d",&n);
    printf("Enter the data: \n");
    while(i<=n){
        struct node* curr=(struct node*)malloc(sizeof(struct node*));    
        scanf("%d",&ptr->data);
        ptr->next=curr;
        ptr=curr;
        i++;
    }
    ptr->next=NULL;
} 

void traversal(struct node*ptr){
    printf("The values in the list are \n");
    while(ptr->next!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

    struct node* insertion_beginning(struct node *head){
    struct node* new=malloc(sizeof(struct node));
    printf("Enter the value :");
    scanf("%d",&new->data);
    new->next=head;
    return new;   
}


struct node* deletion(struct node*ptr){
    int m,i=1;
    struct node*curr,*prev;
    curr=ptr;
    printf("Enter the position you want to delete :\n");
    scanf("%d",&m);
    if(m==1){
        ptr=curr->next;
        free(curr);
        return ptr;
    }
    while(i<m){
     prev=curr;
     curr=curr->next; 
     i++;  
    }
    prev->next=curr->next;
    free(curr);
    return ptr;
}

int main(){
    struct node *start,*head;
    head=(struct node*)malloc(sizeof(struct node*));   
    start=head;
    int n=11;
    while(n!=5){
    printf("Enter the operation to execute\n");
    printf("1.Creation 2.Traversal 3.Insertion at beginning 4.deletion at a location 5.Exit\n");
    scanf("%d",&n);
    if(n==1){
        creation(head);
        }
    else if(n==2){
        traversal(start);
       }
    else if(n==3){
        start=insertion_beginning(start);
        traversal(start);
        }
    else if(n==4)
        {
        start=deletion(start);
        traversal(start);
        }
    else if(n==5){
        printf("YOU ARE DONE");
        return 0;
    }
    else{
    printf("OPERATION  IS  NOT FOUND ");
    }
    }
    return 0;
}