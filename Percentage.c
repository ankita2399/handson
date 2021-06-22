/* Problem Statment:/*Write a program which accept total marks & obtained marks from user and calculate percentage.*/

/*
   Algorithm:
   START
	 Enter total marks and obtained marks
	   Use functions
	    calculate percentage
   END

*/

#include<stdio.h>
//////////////////////////////////////////////////////////
//
// Function Name:    percentage
// Input:            integer
// Output:           float
// Description :     calculate persentage
// Date:             3 August 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

float Percentage(int iNo1,int iNo2)
{
    int iAns=0;
    if(iNo1>0 && iNo2>0)
{
  iAns=(iNo2*100)/iNo1;
  return iAns;
}
    else if(iNo1=0,iNo2=0)
    {
        return 0;
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet =0.0;
    printf(" enter total marks:");
    scanf("%d",&iValue1);
    printf("enter obtained marks:");
    scanf("%d",&iValue2);
    fRet=Percentage(iValue1,iValue2);
    printf("percentage:  %f ",fRet);
    return 0;
}
