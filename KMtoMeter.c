 /* Problem Statment: Write a program which accept distance in kilometer and convert it into meter.
 (1 kiloMeter=1000 Meter)
Input : 4
Output : 4000
Input : 12
Output : 12000 */

/*
   Algorithm:
   START
	Enter number
	Using if
	  Kilometer into Meter
	  END*/
	  ////////////////////////////////////////////////
	  // Function Name: KMtoMeter
	  //Input: 			integer
	  //Output:			integer
	  //Description:    accept distance in kilometer and convert it into meter
	  //Date:			7 August 2020
	  //Author:		    Ankita A Javalekar
	  ////////////////////////////////////////////////
 
#include<stdio.h>
int KMtoMeter( int iNo)
{
  int Meter=1000;
  int iAns=0;
  if (iNo>0)
  {
	  iAns=Meter*iNo;
  }
  return iAns;
}
int main()
{
    int iValue= 0;
	int iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
	iRet=KMtoMeter(iValue);
	printf("%d",iRet);
    return 0;
}
