#include<stdio.h>
void display();
void insert();

int main()
{
int A[20],i,pos,s,k=0,x;

printf("enter array size less than 21:\t");
scanf("%d",&s);

printf("enter array elements\n");
for(i=0;i<s;i++)
scanf("%d",&A[i]);

// to search

printf("enter the elment which to be searched:\t");
scanf("%d",&x);

if(A[i]!=x){
    printf("elment is found \n ");
}else{
    printf("element  not found\n");
    }
    }