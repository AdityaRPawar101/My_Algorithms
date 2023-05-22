#include<stdio.h>

int UniqueElements(int [], int);

main()
 {
   printf("Program to find Largest element in the given Array \n");
   printf("Author : Aditya Pawar \n");
    printf("Reg.No.:-21BCE11104\n");
	printf("Experiment Date :-04-02-2022 \n");                                                      //self details
    printf("Submission Date :-27-03-2022 \n\n");
   int A[50], n, i, flag;
   
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
	printf("]\n"); 
	flag = UniqueElements(A, n);
	if(flag == 1)
	printf("\nThe elements in given array are unique");
	else
	printf("\nThe elements in given array are not unique");
}

int UniqueElements(int A[], int n)
{
	int i, j;
	for(i=0; i<=n-2; i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(A[i] == A[j])
			return 0;
		}
	}
	return 1;
}
