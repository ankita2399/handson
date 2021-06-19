/* Problem Statment:write a progarm which accept number from user and display its factor in decreasing order.*/

/*
   Algorithm:
       START
		Enter number
		 Using for loop
		  Display its factor in decreasing order
       END
 */
#include<stdio.h>           //Header file

//////////////////////////////////////////////////////////
//
// Function Name:    FactRev
// Input:            integer
// Output:           integer
// Description :     It is used print Reverse factor of that number
// Date:             1 August 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

void FactRev(int iNo)
{
	int iCnt=0;
   for(iCnt = iNo/2; iCnt >= 1 ; iCnt--)
   {
	   if(iNo%iCnt==0)
	   {
		   printf("%d\t",iCnt);
	   }
   }
}

int main()
{
    int iValue = 0;
    printf("enter number:");
    scanf("%d",&iValue);
    FactRev(iValue);
    return 0;
}
