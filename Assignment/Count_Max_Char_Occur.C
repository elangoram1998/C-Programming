#include <stdio.h>
#include <stdlib.h>
int main() 
{
    char str[20],maxchar;
    int i,j,max=0,count;
    scanf("%s",&str);
    for(i=0;i<strlen(str);i++)
    {
        count=1;
        for(j=i+1;j<strlen(str);j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
            if(count>max)
            {
                max=count;
                maxchar=str[i];
            }
        }
    }
    printf("%c\n",maxchar);
    printf("%d\n",max);
return 0;
}

