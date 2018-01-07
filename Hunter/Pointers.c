#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10], *ptr;
    int i,len;
    printf("Enter a string: ");
    scanf("%s",&str);
    ptr = str;
    for(i=0;i<1000;i++){
        if(*ptr == '\0')
        {
            break;
        }
        ptr++;
    }
    len = i;
    printf("Reversed String: ");
    for(i=len; i>=0; i--)
    {
        printf("%c",*ptr--);
    }
return 0;
}
