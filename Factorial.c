 /* Problem Statment: write a program to find factorial of given number 
 Input:5
 Output:120
 Input:-5
 Output:120
 Input:4
 Output:24*/

/*
   Algorithm:
   START
	Enter number
	  Using for loop
	   Find factorial of given number.
   END
       
*/
	  ////////////////////////////////////////////////
	  // Function Name: Factorial
	  //Input: 			integer
	  //Output:			integer
	  //Description:    program to find factorial of given number 
	  //Date:			6 August 2020
	  //Author:		    Ankita A Javalekar
	  ////////////////////////////////////////////////
 
#include<stdio.h>
int Factorial( int iNo)
{
	int i=0;
	int Fact=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<=iNo;i++)
	{
		Fact=Fact*i;
	}
	return Fact;
}
int main()
{
    int iValue1 = 0;
	int iRet=0;
    printf("enter number:");
    scanf("%d",&iValue1);
	iRet=Factorial(iValue1);
	printf("Factorial of number is %d",iRet);
    return 0;
}
