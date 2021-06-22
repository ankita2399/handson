/* Problem Statment:write a progarm which accept one number from user and check whether that number is grayer than 100 or not.*/

/*
   Algorithm:
       START
		Enter number
		 Using if else
		  check whether that number is grater than 100 or not
       END
 */
#include<stdio.h>           //Header file
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////
// Function Name:    ChkGreater
// Input:            integer
// Output:           -
// Description :     It is used check whether that number is greater than 100 or not.
// Date:             3 August 2020
// Author:           Ankita A Javalekar
//////////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
	if(iNo>=100)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
    int iValue = 0;
	BOOL bRet=FALSE;
    printf("enter number:");
    scanf("%d",&iValue);
    bRet=ChkGreater(iValue);
	if(iValue>=100)
	{
		printf("Greater");
	}
	else
	{
		printf("Smaller");
	}
    return 0;
}
