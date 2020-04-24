#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
};
struct node *head;

void main ()
{
    int choice=0;
    printf("\n*********Stack operations using linked list*********\n");
    printf("\n\nChose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");

    printf("\n----------------------------------------------\n");
    while(choice != 4)
    {
        printf("\n Enter your choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("Exiting....");
                break;
            }
            default:
            {
                printf("Please Enter valid choice ");
            }
    }
}
}

void push()
{
    int val;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("naa");
    }
    else
    {
        printf("enter the value");
        scanf("%d",&val);
        if(head==NULL)
        {
            temp->data=val;
            temp->next=NULL;
            head=temp;
        }
        else
        {
            temp->data=val;
            temp->next=head;
            head=temp;
        }
    }
}
void pop()
{
    struct node *temp;
    if(head==NULL)
        printf("Empty");
    else
    {
        temp=head;
        head=head->next;
        free(temp);
    }
}

void display()
{
    int i;
    struct node *temp;
    temp=head;
    if(head==NULL)
        printf("empty");
    else
    {
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}


