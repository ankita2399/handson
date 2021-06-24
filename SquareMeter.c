/* Problem Statment:  Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter) .
Input : 5
Output : 0.464515
Input : 7
Output : 0.650321  */

/*
   Algorithm:
   START
	Enter area in square feet
	if iSqr Feet is grater than zero
	calculate
	 dAns=iSqrFeet*fSqrMeter
   END
*/
	  ////////////////////////////////////////////////
	  // Function Name:  SquareMeter
	  //Input: 			integer
	  //Output:			float
	  //Description:	accept area in square feet and convert it into square
	  //Date:			7 August 2020
	  //Author:		    Ankita A Javalekar
	  ////////////////////////////////////////////////
#include<stdio.h>
 double SquareMeter(int iSqrFeet)
{
   double dAns=0.0;
	float fSqrMeter=0.0929;
 if(iSqrFeet>0)
   {
	  dAns=iSqrFeet*fSqrMeter;
   }
   return dAns;
}
int main()
{
    int iValue=0;
	double dRet=0.0;
    printf("Enter area in square feet\t");
    scanf("%d",&iValue);
    dRet=SquareMeter(iValue);
	printf("%4f",dRet);
    return 0;
}
