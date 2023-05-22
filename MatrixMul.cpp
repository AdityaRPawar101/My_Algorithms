#include<stdio.h>

void MatrixMul(int [][20], int [][20], int);
void printArray(int A[][20], int n);

main()
{
	int A[20][20],B[20][20], n, i,j;
    printf("Program for multiplication of two matrices A and B with dimnesions n*n \n");
    printf("Author : Aditya Pawar \n");
    printf("Reg.No.:-21BCE11104\n");
	printf("Experiment Date :-04-02-2022 \n");                                                      //self details
    printf("Submission Date :-27-03-2022 \n");
    printf("---------------------------------------------------------------------------------------------------------------");
    printf("\nEnter the matrix dimension : ");
    scanf("%d", &n);
    printf("\n\n");

    for (i=0;i<=n-1;i++)
    {
    	for(j=0;j<=n-1;j++)
    	{		
		printf("Enter the input for A[%d][%d]: ", i,j);
		scanf("%d", &A[i][j]);
        }
    }

    printf("\n");
    
    for (i=0;i<=n-1;i++)
    {
    	for(j=0;j<=n-1;j++)
    	{		
		printf("Enter the input for B[%d][%d]: ", i,j);
		scanf("%d", &B[i][j]);
        }
    }
    
    printf("\n");
    printf("The input matrix A of %d * %d dimensions is as follows:\n", n, n);
    printArray(A, n);
    
    printf("\n");
    
    printf("\nThe input matrix B of %d * %d dimensions is as follows:\n", n, n);
    printArray(B, n);
    
    printf("\n");
    
    MatrixMul(A, B, n);    
}

// This function computes the multiplication of input matrices A and B with dimensions n-by-n
void MatrixMul(int A[][20], int B[][20], int n)
{
	int C[20][20], i, j, k;
	
	for (i=0;i<=n-1;i++)
    {
    	for(j=0;j<=n-1;j++)
    	{		
           C[i][j] = 0;
           for(k=0;k<=n-1;k++)
           {
           	C[i][j] = C[i][j] + A[i][k]*B[k][j];
		   }
        }
    }
    
    printf("\nThe output matrix C = A * B is as follows:\n");
    printArray(C, n);    
}

//This function prints the elements in a matrix
void printArray(int A[][20], int n) 
{ 
    int i, j; 
    
    for (i=0;i<=n-1;i++)
    {
    	for(j=0;j<=n-1;j++)
    	{
    		printf("%d", A[i][j]);
	        printf(" ");
		}
		printf("\n");	
    }      
} 
