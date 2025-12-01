#include<stdio.h>
int main()
{
	int day;
	printf("enter a day value:");
	scanf("%d",day);
	switch(day)
	{
		case1:printf("monday");
		      break;
		case2:printf("tuesday") ;
		      break;
		case3:printf("wednesday");
		      break;
		case4:printf("thursday");
		      break;
		case5:printf("friday");
			  break;
		case6:printf("saturday");
			 break;
		case7:printf("sunday");
			 break;
	    default:printf("invalid day!");	
    }
    return 0;
}
