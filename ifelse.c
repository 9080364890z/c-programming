/*#include<stdio.h>
int main()
{
    int age;
    printf("enter your Age=");
    scanf("%d",&age);

    printf("you have entered %d as your age\n",age);

    if(age>=18){

        printf("you can vote!\n");
    }else{
        printf("you cannot vote");
    }
}*/
#include<stdio.h>
int main()
{
    int number,i;
for(i=0;i<100;i++){

        printf("\nenter the number\n");
        printf("enter 1 if passed in maths\n");
        printf("enter 2 if passed in science\n");
        printf("enter 3 if passed in both\n");
        printf("enter any key   if u want to exit\n");
        scanf("%d",&number);
                

            if(number==1||number==2){
                printf("\ncongratulations you won 5000 points\n");
               
                                    }else if(number==3){
                                        printf("\n1congratulations u won 10,000 points\n");
                                                         }else{
                                                            break;
                                                         }
                                                        
                                                         }
                                                         
            

}