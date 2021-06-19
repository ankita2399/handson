/* Problem Statment: Write a program which Accept one Number from User and print that number of even numbers  on screen*/

/*
   Algorithm:
       START
	    Enter Number
		 Using while loop
		   print that number of even numbers
	   END
*/

#include<stdio.h>           //Header file
//////////////////////////////////////////////////////////
//
// Function Name:    PrintEven
// Input:            integer
// Output:           integer
// Description :     It is used to print that number of even numbers .
// Date:             31 July 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
	int iEven=0;
	while(iNo>0)
	{
		iEven=iEven+2;
		printf("%d\n",iEven);
		iNo--;
	}
}

int main()
{
 int iValue=0;

   printf("Enter the number\n");
   scanf("%d",&iValue);
   PrintEven(iValue);


 return 0;
}
