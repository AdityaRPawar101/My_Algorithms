#include<stdio.h>

int BinSearch(int A[], int Data, int low, int high);
void printArray(int A[], int n);

main()
{
    int A[20], n, i, Data,index;
    printf("Program for searching a key in an array using Non-recursive Binary Search \n");
  	printf("\n Author:- Aditya Pawar");
	printf("\n Reg. No.:- 21BCE11104");
	printf("\n Experiment Date:- 23-02-2022");
	printf("\n Submission Date:- 27-03-2022");
	printf("\n ------------------------------------------------");
    printf("\n Enter the no of elements : ");
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
    
    index = BinSearch(A, Data, 0, n-1);
    
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

int BinSearch(int A[], int Data, int low, int high)
{
	int mid;
	while(low<=high)
	{
	   mid = (low+high)/2;
	   if(A[mid]==Data)
	   {
	   	return mid;
	   }	   
	   else if(Data<A[mid])
	   {
	   high=mid-1;
	   }	   
	   else
	   {
	    low=mid+1;
	   }	   
	}
	return -1;
}
