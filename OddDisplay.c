/* Problem Statment: Write a program which accepts N from user and print all odd numbers up to N.
Input : 18
Output : 1 3 5 7 9 11 13 15 17 */

/*
   Algorithm:
   START
	Enter numbers
	Using For loop
      all odd numbers up to N
   END
*/
	  ////////////////////////////////////////////////
	  // Function Name:  OddDisplay
	  //Input: 			integer
	  //Output:			intger
	  //Description:	all odd numbers up to N
	  //Date:			6 August 2020
	  //Author:		    Ankita A Javalekar
	  ////////////////////////////////////////////////
#include<stdio.h>
 void  OddDisplay(int iNo)
{
     int i=0;
	 if( iNo<0)
	 {
		 iNo=-iNo;
	 }
	 for(i=1;i<iNo;i++)
	 {
		if((i%2)==1)
	 {
			 printf("%d\t",i);
	 }
	 }
}
int main()
{
    int iValue=0;
    printf("enter number:\t");
    scanf("%d",&iValue);
    OddDisplay(iValue);
    return 0;
}
