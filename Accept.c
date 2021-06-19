/* Problem Statment: Accept one number from user and print that number of * on screen.*/

/*
   Algorithm:
        START
        Accept the number
        In Function using for loop
            print * of the accept number
        Main function call Accept
		END
*/

#include<stdio.h>           //Header file
//////////////////////////////////////////////////////////
//
// Function Name:    Accept
// Input:            integer
// Output:           * * * * *
// Description :     It is used to display * .
// Date:             24 July 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

void Accept(int iNo)
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
    iValue=5;
    Accept(iValue);
    return 0;
}
