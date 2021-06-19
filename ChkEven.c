/* Problme Statment:Accept number from user and check number is even or odd*/
//1-even number
//0-odd number

/*
Algorithm:
         START
		    Accept number as No
			  Divide the number by 2 and the reminder into result
              If the result is zero
                  Then return even
              Otherwise
                  Return odd
         END
*/

#include<stdio.h>    //Header File
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////
//
// Function name :      ChkEven
// Parameters :         Integer
// Return value :       Integer
// Description :        It is used to check number is even / odd
// Author :             Ankita A Javalekar
// Date :               24 July 2020
//
//////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo) //Input the function
{
	 int iAns=0;
	 iAns=iNo%2;

	 if(iAns==1)
	 {
		 return 0;
	 }
	 else
	 {
		 return 1;
	 }
}


int main()
{
	int iValue=0;
	BOOL bRet=0;

	printf("Enter the Number:\n");
	scanf("%d",&iValue);

	bRet=ChkEven(iValue);

	if(bRet==1)
	{
		printf("Number is Even");
	}
	else
	{
		printf("Number is Odd");
	}
	return 0;
}
