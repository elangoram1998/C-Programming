#include <stdio.h>
#include <stdlib.h>
char output[10],stack[10],item;
int j=0,top=-1;
getpre(char ch)
{
    int value;
    switch (ch)
    {
        case '+':
            value=1;
            break;
        case '-':
            value=1;
            break;
        case '*':
            value=2;
            break;
        case '/':
            value=2;
            break;
        default:
            value=3;
            break;
            
    }
    return value;
}
push(char ch)
{
    top++;
    stack[top]=ch;
}
pop()
{
    if(top==-1)
    {
        return NULL;
    }
    else
    {
        item=stack[top];
        top--;
         return item;
    
    }
   
}
int main() 
{
    char input[10];
    scanf("%s",&input);
    int i;
    char k;
    for(i=0;i<strlen(input);i++)
    {
        if(input[i]!='+'&&input[i]!='-'&&input[i]!='*'&&input[i]!='/')
        {
            output[j]=input[i];
            j++;
        }
        else
        {
            k=pop;
            if(getpre(k)==3)
            {
                push(input[i]);
            }
            else if(getpre(k)<getpre(input[i]))
            {
                push(k);
                push(input[i]);
            }
            else
            {
                output[j]=k;
                j++;
                push(input[i]);
            }
        }
    }
    while(top!=-1)
    {
        k=pop();
        output[j]=k;
        j++;
    }
    printf("%s",output);
}

