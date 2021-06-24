 /* Problem Statment: Write a program which accept number from user and print its numbers line.
Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4 */

/*
   Algorithm:
   START
	Enter number
	  Using for loop
	    print its numbers line
   END

*/
	  ////////////////////////////////////////////////
	  // Function Name: Display
	  //Input: 			integer
	  //Output:			integer
	  //Description:    print its numbers line
	  //Date:			6 August 2020
	  //Author:		    Ankita A Javalekar
	  ////////////////////////////////////////////////

#include<stdio.h>
void Display( int iNo)
{
  int i;
   for(i=-iNo;i<=iNo;iNo--)
    {
     printf("%d\t",-iNo);
    }
}
int main()
{
    int iValue= 0;
    printf("enter number:");
    scanf("%d",&iValue);
	Display(iValue);
    return 0;
}
