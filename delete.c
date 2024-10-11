#include<stdio.h>
void display();
void insert();

int main()
{
int A[20],i,pos,s;

printf("enter array size less than 21:\t");
scanf("%d",&s);

printf("enter array elements\n");
for(i=0;i<s;i++)
scanf("%d",&A[i]);

// to delete position

printf("enter the position which is to be deleted: \t");
scanf("%d",&pos);


if(pos<s){
for(i=pos;i<s-1;i++)

A[i]=A[i+1];
s--;
}else{
    printf("you are entering position greater than size of array\n");
}
s=s-1;
printf("now array elements are  =\n");

for(i=0;i<s;i++)
printf("A[%d]=%d\n",i,A[i]);


}