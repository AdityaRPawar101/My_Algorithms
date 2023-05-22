#include<stdio.h>

void Mergesort(int A[], int n);
void Merge(int B[], int C[], int A[], int p, int q);
void printArray(int A[], int n);

main()
{
  int A[20], n, i;
    printf("Program for sorting an array using Divide-and-Conquer based Merge sort \n");
    printf("\n Author:- Aditya Pawar");
	printf("\n Reg. No.:- 21BCE11104");
	printf("\n Experiment Date:- 19-02-2022");
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
    
    Mergesort(A,n);
     
    printf("The array after sorting is : [ ");
    printArray(A, n); 
    printf("]\n\n");

}

//This function sort the elements in ascending order using Divide-and-Conquer based Merge sort
void Mergesort(int A[], int n)
{
	int s, i,j=0,k, B[20], C[20], p, q;
	if(n>1)
	{
	 for(i=0;i<=n/2-1;i++)
	 {
		B[i] = A[i];
	 }
	 p=i;
	 for(k=n/2;k<=n-1;k++)
	 {
		C[j] = A[k];
		j++;
	 }
	q=j;
	Mergesort(B, p);
	Mergesort(C, q);
	Merge(B, C, A, p, q);
	}    
}

//This function merges two sorted arrays
void Merge(int B[], int C[], int A[], int p, int q)
{
   int i=0, j=0, k=0, ind1, ind2;
   while(i<p && j<q)
   {
   	if(B[i]<=C[j])
   	{
   		A[k] = B[i];
   		i = i+1;
	}
	else
	{
		A[k] = C[j];
		j = j + 1;
	}
	k = k + 1;
   }
   ind2=k;
   if(i==p)
   {   	 
   	 for(ind1=j;ind1<=q-1;ind1++)
   	 {
   	 	A[ind2] = C[ind1];
   	 	ind2 = ind2+1;
	 }
   }
   else
   {   	 
   	 for(ind1=i;ind1<=p-1;ind1++)
   	 {
   	 	A[ind2] = B[ind1];
   	 	ind2 = ind2+1;
	 }
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
