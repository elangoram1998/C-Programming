#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char str[20],s[20];
    int temp=0,i,j,k;
    scanf("%s",&str);
    i=0;
    j=strlen(str)-1;
    for(int k=0;k<strlen(str)/2;k++)
    {
       temp=str[i];
       str[i]=str[j];
       str[j]=temp;
       i++;
       j--;
    }
    int a=0;
    printf("%s",str);
    for(k=0;k<strlen(str);k++)
    {
    if(str[k]=='a'||str[k]=='A'||str[k]=='e'||str[k]=='E'||str[k]=='i'||str[k]=='I'||str[k]=='o'||str[k]=='O'||str[k]=='u'||str[k]=='U')
    {
        str[k]=' ';
    }
    else
    {
        s[a++]=str[k];
    }
    }
    printf("\n%s",s);
    return 0;
}

