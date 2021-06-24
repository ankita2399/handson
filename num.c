/*Problem statement:
   Write a program which accept number from user and print numbers till that number.
Input : 8
Output : 1 2 3 4 5 6 7 8 */

/*Algorithm:
       START
			Enter the number
			 Using for loop
			 print Number till that number.
	   END*/

	  ////////////////////////////////////////////////
	  // Function Name: Display
	  //Input: 			integer
	  //Output:			integer
	  //Description:	print numbers till that number
	  //Date:			6 August 2020
	  //Author:		    Ankita A Javalekar
	  ////////////////////////////////////////////////
#include<Stdio.h>
void Display(int iNo)
{
  int i=0;
  if(iNo<0)
  {
	  iNo=-iNo;
  }
  for(i=1;i<=iNo;i++)
   {
	   printf("%d\t",i);
   }
}
int main()
{
    int iValue = 0;
    printf("enter number:");
    scanf("%d",&iValue);
	Display(iValue);
    return 0;
}
