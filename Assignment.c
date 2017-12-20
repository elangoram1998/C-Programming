#include <stdio.h>
#include<string.h>
int main(void) 
{
	char string[10];
  scanf("%s\n",&string);
	char temp;
	for(int i=0;i<strlen(string);i+2)
	{
		temp=string[i];
		string[i]=string[i+1];
		string[i+1]=temp;
	}
	printf("%s\n",string);
	return 0;
}
