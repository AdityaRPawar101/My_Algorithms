#include<stdio.h>

int RecMaxElement (int [], int);
int max(int, int);

main()
 {
   printf("Program to find Largest element in the given Array using Recusrsion \n");
   printf("Author : Aditya Pawar \n");
   printf("Reg.No.:- 21BCE11104\n");   
   printf("Experiment Date: 04-02-2022 \n");                                       //self details                   
   printf("Submission Date : 27-03-2022 \n\n");
   int A[50], n, i, maxval;
    
    printf("Enter the Array Size: ");
    scanf("%d",&n);
    printf("\nEnter the Array Elements: \n");
    for(i=0; i<=n-1; i++)
    {
      printf("Enter element number %d: ", i+1);
      scanf("%d",&A[i]);
	}
	printf("\nThe elements entered for the array are:\n");
	printf("[ ");
	for(i=0; i<=n-1; i++)
    {
      printf("%d ", A[i]);      
	}
	printf("]");
	maxval = RecMaxElement (A, n);
    printf("\n\n The largest element in the given Array is %d", maxval);
    
 }
 
 //The function RecMAXelement finds the largest element in the given input Array of n size using Recursion
 int RecMaxElement (int A[], int n)
 {
   if (n==1)
   {
   	return A[0];
   }
   else
   {
   	return max(RecMaxElement (A, n-1), A[n-1]);
   }
 }
 
 int max(int x, int y)
 {
 	if(x>y)
 	{
 	  return x;	
	}
	else
	{
	  return y;
	}
 }
