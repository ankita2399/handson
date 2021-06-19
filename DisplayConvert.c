/* Problem Statment: /*Accept one character from user and convert case of that character.
Input : a   Output : A
Input : D  Output : d*/

/*
   Algorithm:
       START
	     Enter character
		   Using Nested if else
			convert case of that character
	   END
*/

#include<stdio.h>           //Header file

//////////////////////////////////////////////////////////
//
// Function Name:    DisplayConvert
// Input:            character
// Output:           character
// Description :     convart case of that character.
// Date:             31 July 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

void  DisplayConvert(char ch)
{
    if(ch>=65 && ch<=90)
    {
        ch=ch+32;
        printf("%c",ch);
    }
    else if (ch>=97 && ch<=122)
    {
        ch=ch-32;
        printf("%c",ch);
    }
}


int main()
{
    char cValue;
    printf("enter character\t");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}
