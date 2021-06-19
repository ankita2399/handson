/* Problem Statment:write a program which accept number from user and return diffeencre between summation of all its factor  and non factors.*/

/*
   Algorithm:
   START
	 Enter number
	   Use functions
	    Return diffrance  between summation of all its factor  and non factors.
   END

*/
#include<stdio.h>

//////////////////////////////////////////////////////////
//
// Function Name:    FactDiff
// Input:            integer
// Output:           integer
// Description :     Difference between factor  and  non factor of sum
// Date:             2 August 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
	int iAns=0;
	int Sum=0,NonSum=0;
	Sum=FactSum(iNo);
	NonSum=NonFactSum(iNo);
	if (iNo<=0)
	{
		return -1;
	}
	iAns=Sum-NonSum;
	return iAns;
}
int FactSum(int iNo)
{
	int iCnt=0,iSum=0;
		for(iCnt=1; iCnt<=iNo/2;iCnt++)
		{
			if(iNo%iCnt==0)
			{
				iSum=iSum+iCnt;
			}
		}
		return iSum;
}
int NonFactSum(int iNo)
{
	int iCnt=0,nSum=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iNo%iCnt!=0)
		{
		  nSum=nSum+iCnt;
		}
	}
	return nSum;

}
int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter Number");
	scanf("%d",&iValue);
	iRet=FactDiff(iValue);
	printf("%d",iRet);
   return 0;
}

