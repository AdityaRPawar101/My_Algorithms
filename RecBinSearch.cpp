#include<stdio.h>

int RecBinSearch(int A[], int Data, int low, int high);
void printArray(int A[], int n);

 main()
{
	int A[20], n, i, Data,index;
    printf("Program for searching a key in an array using Recursive Binary Search \n");
    printf("Author :- Aditya Pawar \n");
    printf("Reg. No.:-21BCE11104\n");
    printf("Experiment Date : 23-02-2022 \n");                                                      //self details
    printf("Submission Date : 27-03-2022 \n\n");
    printf("------------------------------------------------------------------------\n");
    printf("Enter the no of elements : ");
    scanf("%d",&n);

    printf("Enter the array elements in ascending order : \n");
    for (i=0;i<=n-1;i++)
    {
	scanf("%d", &A[i]);
    }
    
    printf("\nEnter the Element to be searched: ");
    scanf("%d", &Data);
    
    printf("\nThe given array is : [ ");
    printArray(A, n);
    printf("]\n");
    
    index = RecBinSearch(A, Data, 0, n-1);
     if(index>=0)
    {
    	printf("\nData found at location: %d", index+1);
	}
	else
	{
		printf("Data Not Found\n");
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

int RecBinSearch(int A[], int Data, int low, int high)
{
	int mid;
	while(low<=high)
	{
	   mid = (low+high)/2;
	   if(A[mid]==Data)
	   {
	   	return mid;
	   }	   
	   else if(A[mid]<Data)
	   {
	   return RecBinSearch(A, Data, mid+1, high);
	   }	   
	   else
	   {
	   	return RecBinSearch(A, Data, low, mid-1);
	   }	   
	}	
	return -1;
}
