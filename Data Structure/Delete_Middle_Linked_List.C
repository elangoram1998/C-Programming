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
    delete(head);
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
delete(n *temp1)
{
    n *new;
    while(temp1->data!=20)
    {
        new=temp1;
        temp1=temp1->next;
    }
    new->next=temp1->next;
    temp1->next=NULL;
    free(temp1);
}
display()
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}

