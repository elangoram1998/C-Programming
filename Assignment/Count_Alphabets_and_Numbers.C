#include <stdio.h>
#include <stdlib.h>
int main() 
{
    char str[20];
    int i,j,count1=0,count2=0;
    scanf("%s",&str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            count1++;
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            count2++;
        }
    }
    printf("count of alphabets:%d count of numbers:%d",count1,count2);
    return 0;
}

