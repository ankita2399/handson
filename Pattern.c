/*Problem statement:
    Write a program which accept number from user and print that number of $ & *
on screen.
Input : 5
Output : $ * $ * $ * $ * $ *
Input : 3
Output : $ * $ * $ *
Input : -3
Output : $ * $ * $ *  */
	
/*Algorithm:
       START
			Enter the number 
			 Using for loop
				print that number of $ & *
	   END*/
	   
	  ////////////////////////////////////////////////
	  // Function Name: Pattern
	  //Input: 			integer
	  //Output:			-
	  //Description:	accept number from user and print that number of $ & *
	  //Date:			6 August 2020
	  //Author:		    Ankita A Javalekar
	  ////////////////////////////////////////////////
#include<stdio.h>
void Pattern(int iNo)
{ 
	int i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<=iNo;i++)
	{
		printf("$ \t * \t");
	}
}
int main()
{
	int iValue=0;
	printf("Enter the number:");
	scanf("%d",&iValue);
	Pattern(iValue);
	return 0;
}
