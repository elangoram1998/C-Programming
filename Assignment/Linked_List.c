#include <stdio.h>
#include <stdlib.h>
struct nd
{
    int data;
    struct nd *next;
};
typedef struct nd node;
node *head,*first,*second;
int fun(int a,int b,int c)
{
    head=(node*)malloc(sizeof(node));
    first=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    head->data=a;
    head->next=second;
    first->data=b;
    first->next=NULL;
    second->data=c;
    second->next=first;
}
int main() {
    fun(10,20,30);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}

