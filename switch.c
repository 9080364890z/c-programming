#include<stdio.h>
int main()
{int age,i;

for(i=0;i<8;i++){

printf("enter your age=\n");
scanf("%d",&age);
if(i==9){
        break;
        }
    switch (age)
    {
    case 1:
        printf("the age is 3\n");
        break;
    case 2: {
        printf("the age is 2\n");
        break;  
    default:
        printf("invalid input\n");
        break;
        
        }
       
      }          
}
}