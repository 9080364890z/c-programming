// BINARY SEARCH
// Name:-Shaikh Mehvish Abdul Kareem
// Roll No:-204
// Class:-SY-B (S-5)
#include<stdio.h>

int main()
{
    int n,i,low,mid,high,a,A[10];   

//To take input  
    printf("Enter the number of elements less than 10 :");
    scanf("%d",&n);

    if (n>=10||n==0 ||n<0)
    {
        printf("Invalid input.\n");
    }
    else
    {
        printf("Enter %d sorted elements  =\n",n);
            for (i=0; i<n; i++)
            {
                scanf("%d", &A[i]);            
            }

        printf("Enter the element to search:");
        scanf("%d", &a);
        
        low = 0;
        high = n - 1;
        
// To perform binary search            
        while (low<=high)
        {                  
            mid=(high + low)/2; 

            if(a==A[mid])  
            { 
                printf("Element found at index %d\n",mid);
                return 0;
            }
            else if (A[mid]<a)
            {
                low = mid +1;
            }
            else
            {
                 high = mid - 1;
            }// ending of if statements
        }//ending of while loop
    
        printf("Element not found in array\n");
    
    }//ending of else statement   
}