#include <stdio.h>
#include <stdlib.h>

int main()
{
int n1,n2,arr1[20],arr2[20];
printf("enter the size of the first list:");
scanf("%d",&n1);
for(int i=0;i<n1;i++)
{
scanf("%d",&arr1[i]);
}
printf("enter the size of the second list:");
scanf("%d",&n2);
for(int i=0;i<n2;i++)
{
scanf("%d",&arr2[i]);
}
int N=n1+n2;
int merge[20];
for(int i=0;i<n1;i++)
{
merge[i]=arr1[i];
}
for(int k=n1,j=0;k<N,j<n2;k++,j++)
{
merge[k]=arr2[j];
}
printf("merged array:");
for(int i=0;i<N;i++)
{
printf("%d ",merge[i]);
}
return 0;
}
