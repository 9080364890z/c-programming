//SPARSE matrix
//Name:- Shaikh Mehvish Abdul Kareem
//Roll no.:-204
//Class:- SY-B (S-5)
#include<stdio.h>
#include<stdlib.h>
void display();
void sparse();
void triple();
void transpose();

int A[20][20],i,j,r,c,count=0,m,l=1,k=0,B[20][20],ch;
int main()

{  
  printf("\nEnter no. of ROWS=\t");
  scanf("%d",&r);
  
  printf("\nEnter no. of COLUMNS=\t");
  scanf("%d",&c);

    printf("\nOrder of matrix is %d * %d \n",r,c);
      m=r*c;
      printf("\nEnter %d elements of the matrix \n",m);

          printf("\nEnter array elements=\n");
              for(i=0;i<r;i++)
                for(j=0;j<c;j++)
              scanf("%d",&A[i][j]);

      printf("\nChoices for Array operations are:\n\t 1.DISPLAY\n\t 2.SPARSE\n\t 3.TRIPLE\n\t 4.TRANSPOSE\n\t 5.EXIT\n");

      do{   
          printf("Enter your choice:\t");
          
              scanf("%d",&ch);
              
                  switch (ch)
                  {
                  case 1: display();
                      break;
                  case 2: sparse();
                      break;
                  case 3: triple();
                      break;
                  case 4: transpose();
                      break;
                  case 5: printf("\tEXIT\n");
                          exit(1);
                      break;

                  default:
                      printf("\t INVALID INPUT\n");
                  }// end of switch statements
          }while(1);
  }// end of main

// to display matrix

void display()
{
  printf("Required %d*%d matrix is=\n",r,c);

    for(i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {              
          printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}

// for checking matrix is sparse or not

void sparse()
{
  for(i=0;i<r;i++)
  {           
    for(j=0;j<c;j++)
    {            
      if( A[i][j] != 0)
      count ++;
    }
  }
            
  if(count<(r*c)/2)
  {
    printf("\nIt is sparse matrix\n");
  }
  else if (count==(r*c)/2)
  {
    printf("Number of zeros and non zeros are same\n");
  }
  else
  {
    printf("\nIt is not sparse matrix\n");
  }
}

// for triple

void triple()
{
  B[0][0]= r;
  B[0][1]= c;
  B[0][2]= count;
      
  for(i=0;i<r;i++)
  {           
    for(j=0;j<c;j++)
    {
      if( A[i][j] != 0)
      {      
        B[l][0]= i;
        B[l][1]= j;
        B[l][2]= A[i][j];
        l++;
      }         
    } 
  }

// display of triple

  printf(" \n The triple representation of the matrixis: \n");
  for (i= 0; i <=count; i++)    
  {
    for (j=0;j<3;j++)
    {
      printf("%d\t",B[i][j]);
    }
   printf("\n");
  }  
}

//Display of transpose

void transpose()
{   
  printf("Transpose of a triple matrix is\n"); 
  printf("%d\t %d\t %d",c,r,count);
  for(i=0;i<r;i++)
  {           
    for(j=0;j<c;j++)
    {
      if( A[i][j] != 0)
      {
        printf("%d\t %d\t %d",j,i,A[i][j]);
              
      } 
      printf("\n");                        
    } 
  }
}

