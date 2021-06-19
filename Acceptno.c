/* Problem Statment: Accept one number from user if number is less than 10 then print "Hello" otherwise print"Demo"*/

/*
   Algorithm:
        START
        Accept the number
        If number is less than 10
         then print "Hello"
        otherwise print "Demo"
		END
*/

#include<stdio.h>
//////////////////////////////////////////////////////////
//
// Function Name:    Acceptno
// Input:            integer
// Output:           -
// Description :     number is less than 10 then print "Hello" otherwise print"Demo"
// Date:             24 July 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

void Acceptno(int iNo)
{
	 if(iNo<10)
	 {
		 printf("Hello");
	 }
	 else
	 {
		 printf("Demo");
	 }
}

int main()
{
    int iValue =0;

   printf("Enter number");
   scanf("%d",&iValue);

   Acceptno(iValue);
   return 0;
}
