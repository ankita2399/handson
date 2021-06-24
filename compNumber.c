/*Problem statement:
    write a program which accept number from user and if number is less than 50
	then print small, if is greater than 50 and less than 100 then print medium ,
	if it is grater than 100 then print large.
	Input:75
	Output:Medium*/

/*Algorithm:
       START
			Enter the number
			 If No<50
			  print Small
			 else if NO>=50 && No<100
			  print Medium
			 else if No>=100
			   print Large
	   END*/

	  ////////////////////////////////////////////////
	  // Function Name: Number
	  //Input: 			integer
	  //Output:			-
	  //Description:	Compare No is Large ,Medium or Small
	  //Date:			6 August 2020
	  //Author:		    Ankita A Javalekar
	  ////////////////////////////////////////////////
#include<stdio.h>
void Number(int iNo)
{
	if(iNo<50)
	{
		printf("Small");
	}
	else if(iNo>=50 && iNo<100)
	{
		printf("Medium");
	}
	else if(iNo>=100)
	{
		printf("Large");
	}
}
int main()
{
	int iValue=0;
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	Number(iValue);
	return 0;
}
