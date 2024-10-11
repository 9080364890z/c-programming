#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int items[5];
    int top;
}S;
void initStack(struct Stack*s)
{
    S.top = -1;
}

void main()
{
    int ch;

    printf("Choices are=\n 1.Push operation\n 2.Pop operation\n 3.Display\n 4.Exit\n");
    do{
        printf("Enter your choice=\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            display();
            break;

        case 3:
            printf("Display\n");
            break;
        
        default:
            printf("Invalid input\n");
            break;
        
        case 4:
            exit(0);
        }
    }while(ch!=4);
}

void push()
{
    int x;
    S.top==-1;

    printf("Enter the element to be pushed=\n");
    scanf("%d",&x);

    if (S.top==4)
    {
        printf("Stack is full\n");
    }else
    {
        S.top++;
        S.items[S.top]=x;
    }
}

void display()
{
    int i;
    
    if (S.top==-1)
    {
        printf("Stack is empty\n");
    }else 
    {
                        printf("Array elements are =\n");
                            for(S.top=0;S.top<5;S.top++)
                            printf("item[%d]=%d\n",S.top,S.items[S.top]);
                    }

}