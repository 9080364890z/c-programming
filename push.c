#include <stdio.h>
struct Stack
{
    int items[5];
    int top;
}S;

int main()
{
    int x;

    printf("Enter the element to be pushed=");
    scanf("%d\n",&x);

    if (S.top==4)
    {
        printf("Stack is full\n");
    }else
    {
        S.top++;
        S.items[S.top]=x;
    }

    if(S.top==-1)
    {
        printf("Stack is empty");
    }else{
        printf("Stack elements:");

        for (int i = S.top; i>=0; i--)
        {
        printf ("%d",S.items[i]);
        }
        printf("\n");
    }

}