/* Problem Statment: Program print 5 to 1 number on screen*/

/*
   Algorithm:
        START
        In Display function using while loop
		  Print 5 to 1 number
		Main function call Display
		END
*/
//////////////////////////////////////////////////////////
//
// Function Name:   Display
// Input:            -
// Output:           integer
// Description :     It is used to display 5 to 1 number .
// Date:             24 July 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////
#include<stdio.h>           //Header file
int Display()
{
   printf("\n");
   int ino=5;         //Initialize
  while(ino>=1)   // Condition
 {
  printf(" %d",ino);
  ino--;     // Decrement
 }

}
int main()
{
  Display();
  return 0;
}
