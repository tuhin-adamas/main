#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter your year name");
	scanf("%d",&a);
	if(a%100==0 && a%400==0 || a%4==0)
	{
		printf("the year is lyper");
	}
	else
	{
		printf("the year is not lyper");
	}

 getch();
 return 0;	
	
	
}
