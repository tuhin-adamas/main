#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter the value");
	scanf("%d",&a);
	printf("enter the valu");
	scanf("%d",&b);
	if(a==0||b==0)
	{
		printf("or operator");
	}
	else if(a>=10&&a<=100)
	{
		printf("and operator");
	}
    else
    {
    	printf("none");
	}
getch();
return 0;

}
