#include<stdio.h>


void insertion_sort(int A[], int n);
void printArray(int A[], int n);

main()
{
    int A[20], n, i;
    printf("Program for sorting an array using Brute Force based Insertion sort \n");
    printf("\n Author:- Aditya Pawar");
	printf("\n Reg. No.:- 21BCE11104");
	printf("\n Experiment Date:- 16-02-2022");
	printf("\n Submission Date:- 27/03/2022");
	printf("---------------------------------------------------------\n");
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

    insertion_sort(A,n);
    
    printf("The array after sorting is : [ ");
    printArray(A, n);
    printf("]\n\n");
}

//This function sort the elements in ascending order using Brute force based Insertion sort
void insertion_sort(int A[],int n)
{
    int key, j, i;
    for (j=1;j<=n-1;j++)
    {
	key = A[j];
	i = j-1;
	//Insert A[j] in sorted sequence A[0...j-1]
	while(i>=0 && A[i]>key)
	{
	    A[i+1] = A[i];
	    i = i-1;
	}
	A[i+1] = key;

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

