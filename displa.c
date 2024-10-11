#include<stdio.h>
void display();

int main()
{
int A[20],i,s;

printf("enter array size less than 21:\t");
scanf("%d",&s);

printf("enter array elements\n");
for(i=0;i<s;i++)
scanf("%d",&A[i]);

printf("array elements are  =\n");

for(i=0;i<s;i++)
printf("A[%d]=%d\n",i,A[i]);
}