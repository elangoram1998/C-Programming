#include <stdio.h>
#include <stdlib.h>

int front=-1,rear=-1,array[10],count=0,size=5;
int main() 
{
    int a=size;
    while(a!=0)
    {
        enqueue();
        a--;
    }
    dequeue();
    display();
}
enqueue()
{
    if(count!=size)
    {
        int x;
    scanf("%d",&x);
    if(front==-1&&rear==-1)
    {
        front++,rear++;
        array[front]=array[rear]=x;
    }
    else
    {
        rear++;
        array[rear]=x;
    }
    count++;
    }
    else
    {
        printf("overflows");
    }
    
}
dequeue()
{
    if(front<=rear)
    {
    front++;
    }
    else
    {
        printf("underflows");
    }
}
display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d ",array[i]);
    }
}

