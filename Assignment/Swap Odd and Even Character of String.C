#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[20];
    char temp;
    int i;
    printf("enter the string\n");
    scanf("%s",a);
    for(i=0;i<strlen(a)-1;i+=2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
        printf("swap is:%s\n",a);
return 0;
}
