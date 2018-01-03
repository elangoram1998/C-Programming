#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int arr[50],n,max;
    printf("enter the size:\n");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("max number is:%d",max);

    return 0;
}

