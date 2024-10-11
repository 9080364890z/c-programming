// MENUDRIVEN program to implement ARRAY operations
                
// Name:-Shaikh Mehvish Abdul Kareem
// Roll No:-204
// Class:-SY-B (S-5)

#include<stdio.h>
#include<stdlib.h>
void display();
void insert();
void delete();
void search();

int A[5],s;
int main()
{
int i,ch;

// Taking information related to array from user.

    printf("\nEnter array size less than 5:\t");
    scanf("%d",&s);

        if(s<=0){
            printf("invalid input");
        }
        else if(s>5){
            printf("Maximum size of an Array can be 5 only\n");
        }
        else{
            printf("Enter array elements :\n");
                for(i=0;i<s;i++)
                scanf("%d",&A[i]);

// selection of operation to be performed on array

     printf("\nChoices for Array operations are:\n\t 1.DISPLAY\n\t 2.INSERT\n\t 3.DELETE\n\t 4.SEARCH\n\t 5.EXIT\n");
    
    do{
        printf("Enter your choice:\t");       
        scanf("%d",&ch);
    
        switch (ch)
            {
            case 1: display();
                break;
            case 2: insert();
                break;
            case 3: delete();
                break;
            case 4: search();
                break;
            case 5: printf("\tEXIT\n");
                    exit(1);
                break;
            default:
                printf("\tINVALID INPUT\n");
            }// end of switch statements
        }while(1);//end of do while loop
    }//ending of main
    }

// program to display array

    void display()
        {
            int i;
            if (s==0){
                        printf("Array is empty\n");
                    }else {
                        printf("Array elements are =\n");
                            for(i=0;i<s;i++)
                            printf("\tA[%d]=%d\n",i,A[i]);
                    }
        }

//program to insert an element in array

    void insert()
    {
        if(s==5){
        printf("Array is full\n");
                }
        else{
        int i,pos,x;            
            printf("Enter the POSITION at which element to be inserted=\t");
            scanf("%d",&pos);  
            
            printf("Enter the ELEMENT which is to be inserted=\t");
            scanf("%d",&x);

                    if(pos<s){
                        for(i=s-1;i>=pos;i--)
                        A[i+1]=A[i];
                        A[pos]=x;
                        s++;
                        }else{
                            printf("\n You are entering position greater than the size of array\n");
                        }
                    }
}

//program to delete an element from an array

    void delete()
    { 
        if(s==0){
        printf("Array is empty \n");    
            }else{
                int i,pos;
                    printf("Enter the POSITION which is to be deleted=\t");
                    scanf("%d",&pos);

                    printf("Element deleted is %d\n ",A[pos]);                                
                        if(pos<s){
                            for(i=pos;i<s-1;i++)
                            A[i]=A[i+1];
                            s--;
                            }else if(pos>s){
                                printf("You are entering position greater than size of array\n");
                                }        
                    }
        }

//program to search an element in array

    void search()
        {
        int i,x,k=0;
           if(s==0){
                printf("Array is Empty\n");
            }else{ printf("Enter the element to Search=\t");
                scanf("%d",&x);
                
                for(i=0;i<s-1;i++){            
                        if(A[i]==x){
                        k++;
                        break;                
                        }
                                }

                    if(k==1){
                        printf("Element is Found at %d\n",i+1);
                    }
                    else{
                        printf("Element is not Found\n");
                    }    
            } 
        }   