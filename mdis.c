#include<stdio.h>
void main(){
int A[20][20],i,j,r,c,count=0,m,l=1,k=0,B[20][20],ch;

printf("\n Enter no. of ROWS=\t");
scanf("%d",&r);

printf("\n Enter no. of COLUMNS=\t");
scanf("%d",&c);

    printf("\n Order of matrix is %d * %d \n",r,c);

    m=r*c;
    printf("\n Enter %d elements of the matrix \n",m);


        printf("\nEnter array elements=\n");
            for(i=0;i<r;i++)
              for(j=0;j<c;j++)
            scanf("%d",&A[i][j]);


// to display matrix


      printf("Required %d*%d matrix is=\n",r,c);

          for(i=0;i<r;i++){

                for(int j=0;j<c;j++){
              
                  printf("%d\t", A[i][j]);
                                    }
                printf("\n");
                          }
       
// for checking matrix is sparse or not

            for(i=0;i<r;i++){           
               for(j=0;j<c;j++){
              
                if( A[i][j] != 0)
                count ++;
                    }
              }
            
                  if(count<(r*c)/2){
                    printf("\nIt is sparse matrix\n");
                    }
                    else{
                      printf("\nIt is not sparse matrix\n");
                    }
            
// for triple

      B[0][0]= r;
      B[0][1]= c;
      B[0][2]= count;
      
        for(i=0;i<r;i++){           
                  for(j=0;j<c;j++){
                      if( A[i][j] != 0){
      
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
  
  

//Display of transpose

 
  
  printf("Transpose of a triple matrix is\n");
    printf("%d\t %d\t %d",c,r,count);
                for(i=0;i<r;i++){           
                  for(j=0;j<c;j++){
                    if( A[i][j] != 0){
                    printf("%d\t %d\t %d",j,i,A[i][j]);
                    
                                    } 
                    printf("\n");                        
                      } 
                    }

}

