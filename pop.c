#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
}stack;
void pop(stack **top);
int main()
{
    stack *top=NULL;
    pop(&top);
    pop(&top);
     pop(&top);
}
void pop(stack **top)
{
    if(*top==NULL)
    {
        printf("stack is empty\n");
        
    }
    else
    {
        stack *temp=top;
        top=temp->link;
        printf("poped element:%d",temp->data);
        free(temp);
    }
}
