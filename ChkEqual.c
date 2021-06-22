 /* Problem Statment: write a program which accept two numbers and check whether number are equal or not.*/

/*
   Algorithm:
   START
	Enter number
		Using if else
		  check whether number are equal or not.
   END

*/
#include<stdio.h>           //Header file
typedef int BOOLEAN;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////
// Function Name:    ChkEqual
// Input:            integers
// Output:           -
// Description :     It is used to check whether numbers are equal or not .
// Date:             3 August 2020
// Author:           Ankita A Javalekar
//////////////////////////////////////////////////////////

BOOLEAN ChkEqual(int iNo1,int iNo2)
{
	if(iNo1<0 || iNo2<0)
	{
		return FALSE;
	}
	if(iNo1==iNo2)
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
    int iValue1 = 0, iValue2=0;
	BOOLEAN bRet=FALSE;
    printf("enter 1st number:\n");
    scanf("%d",&iValue1);
    printf("enter 2nd number:\n");
    scanf("%d",&iValue2);
	bRet=ChkEqual(iValue1,iValue2);
	if(iValue1==iValue2)
	{
		printf("Equal");
	}
   else
    {
		printf("Not Equal");
	}

    return 0;
}
