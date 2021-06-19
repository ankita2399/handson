/* Problem Statment: write a program which accept number from user and display all its non factor */

/*
   Algorithm:
   START
	Enter number
		Using for loop
		  display all its non factor
   END

*/

#include<stdio.h>           //Header file

//////////////////////////////////////////////////////////
//
// Function Name:    NonFact
// Input:            integer
// Output:           integer
// Description :     It is used to print no factor of that number .
// Date:             1 August 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

void NonFact(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iNo%iCnt!=0)
		{
		  printf("%d\t",iCnt);
		}
	}
}
int main()
{
int iValue = 0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    NonFact(iValue);
    return 0;
}
