/* Problem Statment: Write a program which accept number from user and check whether it contains 0
in it or not.*/

#include<stdio.h>           //Header file
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////
//
// Function Name:    ChkZero
// Input:            integer
// Output:          -
// Description :     check contain zero or not
// Date:             4 August 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
 if (iNo==0)
 {
 return TRUE;
 }
 if (iNo>0)
 {
  iNo=-iNo;
 }
 while(iNo>0)
 {
	 if((iNo%10)==0)
	 {
		 return TRUE;
		 iNo=iNo/10;
	 }
	//return FALSE;
 }
}
int main()
{
 int iValue = 0;
 BOOL bRet = FALSE;
 printf("Enter number");
  scanf("%d",&iValue);
 bRet = ChkZero(iValue);
 if(bRet == TRUE)
 {
 printf("It Contains Zero");
 }
 else
 {
 printf("It Contains not Zero");
 }
 return 0;
}
