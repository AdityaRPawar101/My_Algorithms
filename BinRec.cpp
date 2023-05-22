#include<stdio.h>

int BinRec (int);


main()
 {
    printf("Program to determine the number of bits to represent a given decimal number in binary form using BinRec \n");
  	printf("\n Author:- Aditya Pawar");
	printf("\n Reg. No.:- 21BCE11104");
	printf("\n Experiment Date:- 04-02-2022");
	printf("\n Submission Date:- 27/03/2022");
	printf("\n -------------------------------\n");
   
   int n, bits;
   printf("Enter the Decimal Number: ");
   scanf("%d",&n);
   bits = BinRec(n);
   printf("\n%d bits are required to represent the decimal number %d in binary form", bits,n);
 }
 
 int BinRec(int n)
 {
 	if (n==1 || n==0)
 	{
 	   return 1;
	}
	else
	{
		return BinRec(n/2)+1;
	}
 }
