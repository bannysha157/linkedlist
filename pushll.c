#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
}stack;
void push(stack **top,int data);
int main()
{
    stack *top=NULL,*newnode=NULL;
    push(&top,10);
    push(&top,20);
     push(&top,30);
    do
{
printf("%d\n",top->data);
top=top->link;
}while(top!=NULL);
}
void push(stack **top,int data)
{
    stack *newnode=(stack *)malloc(sizeof(stack));
    if(newnode==NULL)
    {
        printf("no space");
        
    }
    else
    {
        newnode->data=data;
        newnode->link=NULL;
        if(*top==NULL)
        {
            *top=newnode;
        }
        else
        {
           
            newnode->link=*top;
            *top=newnode;
            
        }
        
        
    }
    
}
