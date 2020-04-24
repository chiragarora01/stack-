//simple stack

#include <stdio.h>

int stack[100],choice,size,top,x,i;
void push();
void pop();
void display();
void peak();
int main()
{
    top=-1;
    printf("enter the size of stack\t\t\t\t\t");
    scanf("%d",&size);
    printf("\n\t\t\t\t\t STACK OPERATIONS USING ARRAY");
    printf("\n\t\t\t\t\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT\n\t 5.PEAK");
    while(choice!=4)
    {
        printf("\n enter the choice\t\t\t\t\t\t")  ;
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
            printf("\n\t exit point");
            break;
        }
        case 5:
        {
            peak();
            break;
        }
        default:
        {
            printf("enter the valid choice");
        }
        }
    }

}




void push()
{
    if (top>size-1)
        printf("\nstack is full\n");
    else
    {
        printf("enter the value to be pushed\t\t\t\t\t");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if(top<=-1)
        printf("stack is under flow");
    else
    {
        printf("the popped element is %d\t\t\t\t\t",stack[top]);
        top--;
    }
}
void display()
{
    if (top>=0)
    {
        printf("the element in stack \n");
        for (i=top; i>-1; i--)
            printf("\n%d\n",stack[i]);
    }
    else
    {
        printf("stack is empty");
    }
}
void peak()
{
    if (top==-1)
        printf("stack is empty");
    else
        printf("top is of %d",stack[top]);
}
