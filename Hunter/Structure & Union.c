#include <stdio.h>
#include <stdlib.h>

struct car_details
{
char carName[50],color[50];
int distance;
char rented[10];
union owner
{
char name[50];
char address[50];
int date;
};
};
int main()
{
struct car_details s={"HondaBrio","Black",20000,"Yes"};
union owner a={"Arun","Metukuppam",01/07/2015};
int repair;
printf("is the car is repair:");
scanf("%d",&repair);
if(repair==1)
{
printf("%s",a.name);
}
return 0;
}
