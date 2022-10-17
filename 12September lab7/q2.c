/* WAP in C to store user entered students details such as
 roll no,CGPA,in a stack and print these in the reverse order of storing */

 #include <stdio.h>
 #include <stdlib.h>
    struct node{  
        int roll;
        float cgpa;
        struct node *next;
    };
    struct node *top=NULL;
    void push(){
        struct node *new;
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the roll no. :");
        scanf("%d",&new->roll);
        printf("Enter the cgpa of the student ");
        scanf("%f",&new->cgpa);
        new->next=top;
        top=new;

    }
    void pop(){
        struct node *temp;
        temp=top;
        if (top==NULL){
            printf("EMPTY STACK");
        }
        else{
            printf("The roll no. of the student is %d and the CGPA of the student is %0.3f",temp->roll,temp->cgpa);
            top=top->next;
            free(temp);
            }
    };

    void display(){
        struct node *temp;
        temp=top;
        if (top==NULL){
            printf("EMPTY STACK");
        }
        else{
            while(temp!=NULL){
                printf("The roll no. is %d and the CGPA is %0.3f\n",temp->roll,temp->cgpa);
                temp=temp->next;
            }
        }
    }
    int main(){
        int ch;
        while(1){
            printf("Enter your choice :\n");
             printf("1.Push\t2.POP\t3.Display\t4.Exit\n");
            scanf("%d",&ch);
            switch(ch){
                case 1:push();
                break;
                case 2:pop();
                break;
                case 3:display();
                break;
                case 4:exit(0);
                break;
            }
        }
    }
    