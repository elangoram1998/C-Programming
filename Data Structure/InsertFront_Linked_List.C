#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node n;
n *head,*temp;

int main() 
{
    int a=5;
    while(a!=0)
    {
        create();
        a--;
    }
    insert();
    display(head);
}
create()
{
    int b;
    scanf("%d",&b);
    n *newnode;
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
insert()
{
    int c;
    scanf("%d",&c);
    n *newnode;
    newnode=(n*)malloc(sizeof(n));
    newnode->data=c;
    newnode->next=head;
    head=newnode;
}
display(n *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

