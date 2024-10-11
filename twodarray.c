#include<stdio.h>
int main()
{
int i,j;
int marks[4][2]={{1,2,3,4},
                {6,8}};

// for(i=0;i<4;i++){
//     for(int j=0;j<2;j++){
//     printf("the value of %d,%d element of the array is %d\n",i,j,marks[i][j]);
// }
// }
// }

//display matrix

for(i=0;i<4;i++){
     for(int j=0;j<2;j++){
        printf("%d",marks[i][j]);
        }
        printf("\n");
        }
        }