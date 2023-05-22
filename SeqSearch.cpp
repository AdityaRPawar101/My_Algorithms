#include<stdio.h>


int SequentialSrch(int [], int, int);//Function declaration

main() //main function
{
   printf("Program for Sequential Search using Brute Force Approach \n");
    printf("Author : Aditya Pawar \n");
    printf("Reg.No.:-21BCE11104\n");
	printf("Experiment Date :-23-02-2022 \n");                                                      //self details
    printf("Submission Date :-27-03-2022 \n\n");
   int A[50],key, n, i, pos;
   printf("Enter the array size: ");
   scanf("%d", &n);
   printf("Enter the array elements: \n");
   for(i=0;i<=n-1;i++)
   {
     printf("Enter the %d element:", i+1);
     scanf("%d",&A[i]);
   }

   printf("Enter the key to be searched: ");
   scanf("%d", &key);
   pos = SequentialSrch(A,key,n);   //calling of sequenctial search function
   if(pos>=0 && pos<=n-1)
   {
    printf("The key found in the array at location %d ", pos+1);
   }
    else
    {
      printf("The key is not found in the array");
    }
     
   }

   int SequentialSrch(int A[], int key, int n) //Defining Seq Search function
   {
    int i=0;
    while(i<n && A[i]!=key)
    {
    i = i+1;
    }
    if(i<n)
    {
    return i;     //return index i if key found
    }
    else
    {
    return -1;    //return -1 if key not found
    }
   }
