#include<stdio.h>

void Quicksort(int A[], int p, int r);
int Partition(int A[], int p, int r);
void exchange(int *x, int *y);
void printArray(int A[], int n);

main()
{
  int A[20], n, i;
    printf("Program for sorting an array using Divide-and-Conquer based Quick sort \n");
    printf("Author:-Aditya Pawar\n");
    printf("Reg.No.:- 21BCE11104\n");
    printf("Experiment Date:- 19-02-2022\n");
    printf("Submission Date:- 27-03-2022\n");
	printf("---------------------------------------------------------------------------------------------------------------");
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

    Quicksort(A,0,n-1); 
     
    printf("The array after sorting is : [ ");
    printArray(A, n); 
    printf("]\n\n");

}

//This function sort the elements in ascending order using Divide-and-Conquer based Quick sort
void Quicksort(int A[], int p, int r)
{
	int q;
	if(p<r)
	{
	q = Partition(A, p, r);
	Quicksort(A, p, q-1);
	Quicksort(A, q+1, r);
	}    
}

//This function returns the location of pivot element
int Partition(int A[], int p, int r)
{
	int x = A[r];
	int i,j;
	i = p-1;
	for(j=p;j<=r-1;j++)
	{
		if(A[j]<=x)
		{
			i = i+1;
			exchange(&A[i], &A[j]);
		}
	}
	exchange(&A[i+1],&A[r]);
	return i+1;
}

//This function exchanges the given two values using call by reference
void exchange(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
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
