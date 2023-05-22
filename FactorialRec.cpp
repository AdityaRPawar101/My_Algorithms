#include<stdio.h>


int factorial (int);

main()
 {
   printf("Program for Factorial of a non negative integer with Recursive function \n");
   printf("Author : Dr. Paras Jain \n");   
   printf("Experiment Date: 31-01-2022 \n");                                       //self details                   
   printf("Submission Date : \n\n");
   int num, fac;
    
    printf("Enter the number ");
    scanf("%d",&num);
    fac = factorial(num);
    printf("\n The factorial of %d is %d ", num, fac);
    
 }
 
 int factorial (int n)
 {
   if (n == 0)
   return 1;
   else
   return n*factorial(n-1);
 }
