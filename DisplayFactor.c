/* Problem Statment: program which accept number from user and print even factor of that number */

/*
   Algorithm:
        START
		  Enter number
		   Using for loop
		    Print even factor of that number
		END
 */
#include<stdio.h>           //Header file
//////////////////////////////////////////////////////////
//
// Function Name:    DisplayFactor
// Input:            integer
// Output:           integer
// Description :     It is used print even factor of that number
// Date:             31 July 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i=1; i<iNo ;i++)
    {
        if(iNo%i==0)
        {
            printf("\t%d",i);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("enter number:");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;
}
