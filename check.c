#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

//Push element onto stack
void push(char c) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = c;
    }
}

//Pop element from stack
char pop() {
    if (top == -1) {
        return -1;
    } else {
        return stack[top--];
    }
}

//checking if parentheses are balanced or not
int Balanced(char symb[]) {
    int i = 0;
    char temp;

    while (symb[i] != '\0') { 

        if (symb[i] == '(' || symb[i] == '{' || symb[i] == '[')
        {
            push(symb[i]);  

        } else if (symb[i] == ')' || symb[i] == '}' || symb[i] == ']') 
        {
            if (top == -1) {
                return 0; 
            
            } else 
            {
                temp = pop();  
                if ((symb[i] == ')' && temp != '(') || 
                    (symb[i] == '}' && temp != '{') || 
                    (symb[i] == ']' && temp != '[')) {
                    return 0;  
                }// end of nested if-else
            }// end of else
        }// end of if else ladder
        i++;  
    }// end of while loop

    if (top == -1) {
        return 1;  
    } else {
        return 0; 
    }
}

int main() {
    char expression[MAX];

    printf("Enter an expression: ");
    scanf("%s", expression);

    if (Balanced(expression)) {
        printf("Balanced\n");
    } else {
        printf("Not Balanced\n");
    }

    return 0;
}
