/* Problem Statment:  Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20 */

/*
   Algorithm:
   START
	Enter numbers
	Using For loop
      display its table	
   END
*/
	  ////////////////////////////////////////////////
	  // Function Name: MultipleDisplay
	  //Input: 			integer
	  //Output:			intger
	  //Description:	print first 5 multiples of N
	  //Date:			6 August 2020
	  //Author:		    Ankita A Javalekar
	  ////////////////////////////////////////////////
#include<stdio.h>
 void  MultipleDisplay(int iNo)
{
     int i;
		if (iNo<0)
		{
			iNo=-iNo;
		}
        for(i=1;i<=5;i++)
		{
			printf("%d\t",iNo*i);
		}
 
}
int main()
{
    int iValue=0;
    printf("enter number:\t");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    return 0;
}
