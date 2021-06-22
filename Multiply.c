/* Problem Statment: Write a program which accept three numbers and print its multiplication.
Input :  5   4   7    Output :  140
Input :  5   0   7    Output :  35
Input :  0   0   0    Output :  0 */


#include<stdio.h>           //Header file

//////////////////////////////////////////////////////////
// Function Name:     Multiply
// Input:            integer
// Output:           integer
// Description :     write a program which accept three numbers and print its Multiplication.
// Date:             4 August 2020
// Author:           Ankita A Javalekar
//////////////////////////////////////////////////////////

 int Multiply(int iNo1,int iNo2,int iNo3)
 {
	int iAns;
	if(iNo1,iNo2,iNo3>0)
	{
		iAns=iNo1*iNo2*iNo3;
	}
    if(iNo1==0)
	{
		iAns=iNo2*iNo3;
	}
	else if(iNo2==0)
	{
	  iAns=iNo1*iNo3;

	}
	else if(iNo3==0)
	{
		iAns=iNo1*iNo2;
	}
	return iAns;
 }

int main()
{
    int iValue1 = 0,iValue2 = 0, iValue3 = 0, iRet = 0;
    printf("enter three numbers:\n");
    scanf("%d \t %d \t %d",&iValue1, &iValue2, &iValue3);
    iRet=Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication:%d",iRet);
    return 0;
}
