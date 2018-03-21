#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node n;
n *head,*head1;
int len=1;
reverse()
{
    n *temp;
    temp=head;
    while(len!=3)
    {
        temp=temp->next;
        len++;
    }
    head1=temp->next;
    n *p,*q,*r;
    p=q=r=head1;
    p=p->next->next;
    q=q->next;
    r->next=NULL;
    q->next=r;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head1=q;
    temp->next=head1;
}
int main()
{
    int a=6;
    while(a!=0)
    {
        create();
        a--;
    }
    reverse();
    display();
}
create()
{
    n *newnode,*temp;
    newnode=(n*)malloc(sizeof(n));
    int x;
    scanf("%d",&x);
    newnode->data=x;
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
display()
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
