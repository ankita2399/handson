/*Problem statement:
    Write a program which accept radius of circle from user and calculate its area
	consider value of PI as 3.14(Area=PI*Radius*Radius)
Input : 5.3
Output : 88.2026
Input : 10.4
Output : 339.6224*/
	
/*Algorithm:
       START
			Enter the number 
			 Using if 
				Area=PI*Radius*Radius
			calculate Area
	   END*/
	   
	  ////////////////////////////////////////////////
	  // Function Name: CircleArea
	  //Input: 			float
	  //Output:			float
	  //Description:	calculate its area
	  //Date:			7 August 2020
	  //Author:		    Ankita A Javalekar
	  ////////////////////////////////////////////////
#include<stdio.h>
double CircleArea(float fRadius)
{ 
	double fArea=0.0;
	float PI=3.14;
	if(fRadius>0)
	{
		fArea=PI*(fRadius*fRadius);
		
	}
	return fArea;
}
int main()
{
	float fValue=0.0;
	double dRet=0.0;
	printf("Enter radius:");
	scanf("%f",&fValue);
	dRet=CircleArea(fValue);
	printf("Area:%6f",dRet);
	return 0;
}
