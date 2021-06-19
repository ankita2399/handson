/* Problem Statment: Accept one number from user and print that number of * on screen.*/

/*
   Algorithm:
        START
        Accept the number
        In Function using for loop
            print * of the accept number
        Main function call Display
		END
*/

#include<stdio.h>           //Header file
//////////////////////////////////////////////////////////
//
// Function Name:    Display
// Input:            integer
// Output:           Display number of * .
// Description :     It is used to display * .
// Date:             24 July 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*\t");
	}
}
int main()
{
    int iValue =0;

	printf("Enter the number");
	scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
