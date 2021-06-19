/* Problem Statment: Accept on character from user and check whether that character is vowel  (a,e,i,o,u) or not.
Input : E   Output : TRUE
Input : d   Output : FALSE */

/*
   Algorithm:
   START
      Enter character
	    Using if else
		   check whether that character is vowel  (a,e,i,o,u) or not.
   END

*/
#include<stdio.h>
typedef int BOOL;
# define TRUE 1
# define FALSE 0

//////////////////////////////////////////////////////////
//
// Function Name:    ChkVowel
// Input:            charater
// Output:           BooL( TRUE OR FALSE)
// Description :     check whether that character is vowel(a,e,i,o,u) or not. .
// Date:             31 July 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

BOOL ChkVowel(char ch)
{
    if(ch=='A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        return TRUE;
    }
    else if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue ='\0' ;
    BOOL bRet=FALSE;

    printf("enter character: ");
    scanf("%c",&cValue);
    bRet=ChkVowel(cValue);
    if (bRet == TRUE)
        {
            printf("It is vowel");
        }
    else
        {
             printf("It is not Vowel");
        }
     return 0;
}

