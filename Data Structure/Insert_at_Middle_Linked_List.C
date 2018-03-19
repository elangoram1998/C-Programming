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
    insert(head);
    display();
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
insert(n *temp1)
{
    temp1=head;
    int x=250;
    n *newnode;
    newnode=(n*)malloc(sizeof(n));
    newnode->data=x;
    while(temp1->data!=30)
    {
        temp1=temp1->next;
    }
    newnode->next=temp1->next;
    temp1->next=newnode;
}
display()
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
