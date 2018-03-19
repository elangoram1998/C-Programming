#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node n;
n *head;
int main()
{
    int a=5,x=2;
    while(a!=0)
    {
        create();
        a--;
    }
    while(x!=0)
    {
     insert(head);
     x--;
    }
    display();
}
create()
{
    int b;
    scanf("%d",&b);
    n *newnode,*temp;
    newnode=(n*)malloc(sizeof(n));
    newnode->data=b;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
            
}
insert(n *temp1)
{
    int c=100;
    n *newnode;
    temp1=head;
    newnode=(n*)malloc(sizeof(n));
    newnode->data=c;
    newnode->next=NULL;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=newnode;
    temp1=newnode;
}
display()
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
