/* Problem Statment: Write a program which Accept one Number from User and display its multiplicatin of factors
Input- 12 Output-144 (1*2*3*4*6)
Input- 13 Output-1 (1)
Input- 10 Output-10 (1*2*5)*/

/*
   Algorithm:
       START
	     Enter number
	      Using for loop
		    display its multiplicatin of factors
	   END

*/

#include<stdio.h>           //Header file

//////////////////////////////////////////////////////////
//
// Function Name:    MultiFact
// Input:            integer
// Output:           integer
// Description :     It is used to mutiplication of factor .
// Date:             1 August 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

int MultiFact(int iNo)
{
	int iMult=1;
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
	 if(iNo%iCnt==0)
	 {
			iMult=iMult*iCnt;
	 }
	}
	return iMult;
}

int main()
{
 int iValue=0;
 int iRet=0;

   printf("Enter the number\n");
   scanf("%d",&iValue);
  iRet=MultiFact(iValue);
 printf("%d",iRet);
 return 0;
}
