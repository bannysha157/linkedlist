#include<stdio.h>
#include<stdlib.h>
typedef struct stu
{
    int data;
    struct stu *link;
}node;
node *create_node();
void  display(node *);
node *insert_begin(node *);
int main()
{
int x,n;
node *head=NULL;
while(1)
{
    printf("\n1.create\n2.display\n3.insert at begin\n0.exit\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:head=create_node();
        break;
        case 2:display(head);
        break;
        case 3:head=insert_begin(head);
        break;
        default :
        exit(1);
    }
}
    
}
node * create_node()
{
    node *head=NULL;
    node *new,*temp=NULL;
    int i,len;
    printf("enter the length: \n");
    scanf("%d",&len);
   for(i=1;i<=len;i++)
    {
        new=(node *)malloc(sizeof(node));
        printf("enter the elements: \n");
        scanf("%d",&new->data);
        new->link=NULL;
        if(head==NULL)
        {
            head=temp=new;
        }
        else
        {
            temp->link=new;
            temp=new;
        }
    }
    return head;
}
void display(node *head)
{
    node *ptr=NULL;
    ptr=head;
    int c=0;
    if(ptr==NULL)
    {
        printf("list is empty\n");
    }
    else
    while(ptr!=NULL)
    {
        c++;
        
        printf(" %d\t",ptr->data);
        ptr=ptr->link;
    }
    printf("no of nodes=%d",c);
    }
node  *insert_begin(node *head)
{
      node *new,*temp=NULL;
        new=(node *)malloc(sizeof(node));
        printf("enter the element: \n");
        scanf("%d",&new->data);
        new->link=NULL;
    
            new->link=head;
            head=new;
    return head;
} 

