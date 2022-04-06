[0:48 pm, 30/03/2022] Rakesh Anna Embedded: #include <stdio.h>
#include <stdlib.h>
typedef struct stu
{
    int data;
    struct stu *link; 
}node;

node *head=NULL;

void create_circularnode();
void Display();
void Circular_list_or_not();

int main()
{
    int x,n;
    while(1)
    {
        printf("\n1.Create circularlinked list\n2.Display\n3.check circular or not\n0.exit\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1: create_circularnode();
                    break;
            case 2: Display();
                    break;
            case 3:Circular_list_or_not();
                    break;
            default:exit(1);
        }
    }
    
    return 0;
}
void create_circularnode()
{
    node *new,*temp=NULL;
    int i,len;
    printf("Enter the length of the linked l…
[1:26 pm, 04/04/2022] Rakesh Anna Embedded: Rom
[1:27 pm, 04/04/2022] Simply Cuty 😍: K
[3:11 pm, 05/04/2022] Simply Cuty 😍: 🤦‍♀️🤦‍♀️ Kavitha
[6:22 pm, 05/04/2022] Rakesh Anna Embedded: file:///C:/Users/dell/AppData/Roaming/Foxmail7/Temp-6180-20220405181844/%C2%A0%C2%A0https://github.com/SIDOOJURAKESH/Python-4-4-2022-.git
[6:23 pm, 05/04/2022] Rakesh Anna Embedded: //github.com/SIDOOJURAKESH/Python-4-4-2022-.git
[6:23 pm, 05/04/2022] Simply Cuty 😍: K done
[11:43 am, 06/04/2022] Rakesh Anna Embedded: #include<stdio.h>
#include<stdlib.h>
typedef struct stu
{
    int data;
    struct stu *link;
}node;
//node *head=NULL;
node *create_node();
void  display(node *);
node *insert_begin(node *);
node *insert_atend(node *head);
node *insert_atpos(node *head);
node *insert_at_beforekey(node *head);
node *insert_at_afterkey(node *head);
node *deletkey(node *head);
node *reverselist(node *head);
int main()
{
int x,n;
node *head=NULL;
while(1)
{
    printf("\n1.create\n2.display\n3.insert\n4.insert atend\n5.insert atpos\n6.insert at beforekey\n7.insert afterkey\n8.deletkey\n9.reverselist\n0.exit\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:head=create_node();
        break;
        case 2:display(head);
        break;
        case 3:head=insert_begin(head);
        break;
        case 4:head=insert_atend(head);
        break;
        case 5:head=insert_atpos(head);
        break;
        case 6:head=insert_at_beforekey(head);
        break;
        case 7:head=insert_at_afterkey(head);
        break;
        case 8:head=deletkey(head);
        break;
        case 9:head=reverselist(head);
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
node  *insert_atend(node *head)
{
      node *new,*temp=head;
        new=(node *)malloc(sizeof(node));
        printf("enter the element: \n");
        scanf("%d",&new->data);
        new->link=NULL;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=new;
           
    return head;
} 
node  *insert_atpos(node *head)
{
    int pos,i,data;
      node *new,*temp=head;
        new=(node *)malloc(sizeof(node));
        printf("enter the position: \n");
        scanf("%d",&pos);
        printf("enter the element: \n");
        scanf("%d",&new->data);
        new->link=NULL;
        if(pos==1)
        {
            new->link=head;
            head=new;
            
        }
        else
        {
    for(i=1;i<pos-1;i++)
    {
    temp=temp->link;
    }
    
    new->link=temp->link;
    temp->link=new;

        }
    return head;
} 
node  *insert_at_beforekey(node *head)
{
    int pos,i,data,key;
      node *new,*temp=head;
      node *s=temp->link;
        new=(node *)malloc(sizeof(node));
        printf("enter the key: \n");
        scanf("%d",&key);
        printf("enter the element: \n");
        scanf("%d",&new->data);
        new->link=NULL;
        if(head->data==key)
        {
            new->link=head;
            head=new;
            
        }
        else
        {
    for(i=1;s->data!=key;i++)
    {
    temp=temp->link;
    s=s->link;
    }
    
    
        if(s->data==key)
    {
    new->link=temp->link;
    temp->link=new;
    }
    else
    printf("key not found");
        }
    return head;
} 
node  *insert_at_afterkey(node *head)
{
    int i,data,key;
      node *new,*temp=head;
      node *s=temp->link;
        new=(node *)malloc(sizeof(node));
        printf("enter the key: \n");
        scanf("%d",&key);
        printf("enter the element: \n");
        scanf("%d",&new->data);
        new->link=NULL;
    for(i=1;temp->data!=key;i++)
    {
    temp=temp->link;

    }
    if(temp->data==key)
    {
    new->link=temp->link;
    temp->link=new;
    }
    else
    printf("key not found");
        
    return head;
} 
node *deletkey(node *head)
{
    int key;
    printf("enter the key: \n");
    scanf("%d",&key);
    node *temp=head,*q,*p=temp->link;
    if(head->data==key)
    {
        q=head->link;
        free(head);
        return q;
    }
    else
    {
        while(p->data!=key)
        {
            temp=temp->link;
            p=p->link;
            
        }
        temp->link=p->link;
        
        free(p);
        
    }
    return head;
}

node *reverselist(node *head)
{
    node *prev=NULL,*temp=NULL,*new=NULL;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else if(head->link==NULL)
	{
		printf("List is having only one node in the list\n");
	}
	else
	{
		temp=head;// pointing to first node
		while(temp!=NULL)
		{
		 new=temp->link;
		 temp->link=prev;
		 prev=temp;
		 temp=new;
		}
		head=prev;
	}
	return head;
}
