#include<stdio.h>
void display(); 
void insert();
int A[6];
int main()
{
int i,pos,s,x;

printf("enter array size less than :\t");
scanf("%d",&s);

printf("enter array elements\n");
for(i=0;i<s;i++)
scanf("%d",&A[i]);

// to insert element

printf("enter the position at which element to be inserted=\t");
scanf("%d",&pos);

for(i=0;i<s;i++){

if(pos<s){
for(i=s-1;i>=pos;i--)
A[i+1]=A[i];
A[pos]=x;
s++;}else
{
    printf("you are entering position greater than size of array\n");
    break;
}

 }

 if(i>s){
printf("array is full\n");
 }
printf("enter the element which is to be inserted=\t");
scanf("%d",&x);



// to display updated matrix
printf("now array elements are  =\n");

for(i=0;i<s;i++)
printf("A[%d]=%d\n",i,A[i]);

}

