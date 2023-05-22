#include<stdio.h>


void Selection_sort(int A[], int n);
void printArray(int A[], int n);

main()
{
  int A[20], n, i;
    printf("Program for sorting an array using Brute Force based Selection sort \n");
	printf("\n Author:- Aditya Pawar");
	printf("\n Reg. No.:- 21BCE11104");
	printf("\n Experiment Date:- 14-02-2022");
	printf("\n Submission Date:- 27/03/2022");
    printf("\n---------------------------------------------------------------------------------------------------------------");
    printf("\nEnter the array size : ");
    scanf("%d", &n);
    printf("\n");
    for (i=0;i<=n-1;i++)
    {
    printf("Enter element number %d: ", i+1);
	scanf("%d", &A[i]);
    }
    printf("\nThe array before sorting is : [ ");
    printArray(A, n);
    printf("]\n\n");

    Selection_sort(A,n);
    
    printf("The array after sorting is : [ ");
    printArray(A, n);
    printf("]\n\n");
}

//This function sort the elements in ascending order using Brute force based Selection sort
void Selection_sort(int A[], int n)
 {
   int i, j, min, temp;
   for(i=0; i<=n-2; i++)
   {
      min = i;
     for(j=i+1; j<=n-1; j++)
     {
      if(A[j]<A[min])
      {
	 min = j;
      }
     }
     temp = A[i];
     A[i] = A[min];
     A[min] = temp;
   }
}

//This function prints the elements in an array
void printArray(int A[], int n) 
{ 
    int i; 
    for (i=0;i<=n-1;i++)
    {
	printf("%d", A[i]);
	printf(" ");
    }     
} 


