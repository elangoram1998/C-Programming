#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node n;
n *front=NULL,*rear=NULL,*newnode,*temp;
int a=4,count=0;
int main() 
{
 int b=4;
 while(b!=0)
 {
     enqueue();
     b--;
 }
  dequeue();
  display();
}
enqueue()
{
    int x;
    newnode=(n*)malloc(sizeof(n));
    if(count!=a)
    {
        scanf("%d",&x);
        newnode->data=x;
        newnode->next=NULL;
        if(front==NULL)
        {
            front=rear=newnode;
            temp=newnode;
        }
        else
        {
            rear=newnode;
            temp->next=rear;
            temp=rear;
        }
        count++;
    }
}
dequeue()
{
    n *temp;
    temp=front;
    if(front!=NULL)
    {
        front=front->next;
        free(temp);
    }
}
display()
{
    while(front!=NULL)
    {
        printf("%d ",front->data);
        front=front->next;
    }
}
