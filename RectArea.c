/*Problem statement:
   Write a program which accept width & hight of rectangle from user and calculate its area.
   (Area=width*hight)
Input : 5.3    9.78
Output : 51.834*/

/*Algorithm:
       START
			Enter the number
			Using if
			 (Area=width*hight)
			calculate RectArea
	   END*/

	  ////////////////////////////////////////////////
	  // Function Name: RectArea
	  //Input: 			integer
	  //Output:			integer
	  //Description:	calculate its rectangle Area
	  //Date:			7 August 2020
	  //Author:		    Ankita A Javalekar
	  ////////////////////////////////////////////////
#include<Stdio.h>
float RectArea(float fWidth ,float fHight)
{
double fArea=0.0;
  if(fWidth>0 && fHight>0)
  {
	  fArea=fWidth*fHight;
  }
  return fArea;
}
int main()
{
   float fValue1=0.0,fValue2 =0.0;
   double dRet=0.0;
    printf("Enter width:");
    scanf("%f",&fValue1);
	printf("Enter hight:");
    scanf("%f",&fValue2);
	dRet=RectArea(fValue1,fValue2);
     printf("Area:%6f",dRet);
  return 0;
}
