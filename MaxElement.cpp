#include<stdio.h>

int MaxElement (int [], int);

main()
 {
   printf("Program to find Largest element in the given Array \n");
    printf("Author : Aditya Pawar \n");
    printf("Reg.No.:-21BCE11104\n");
	printf("Experiment Date :-04-02-2022 \n");                                                      //self details
    printf("Submission Date :-27-03-2022 \n\n");
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
	maxval = MaxElement (A, n);
    printf("\n\n The largest element in the given Array is %d", maxval);
    
 }
 
 //The function MAXelement finds the largest element in the given input Array of n size
 int MaxElement (int A[], int n)
 {
   int maxval, i;
   maxval = A[0];
   for(i=1;i<=n-1;i++)
   {
   	 if(A[i]>=maxval)
   	 {
   	 	maxval = A[i];
	 }
   }
   return maxval;
 }
