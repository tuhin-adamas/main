#include<stdio.h>
#include<conio.h>
int main()

{

	int i,t,n;
	t=1234;
	for(i=0; ;i++)
	{
	printf("enter your password:");
	scanf("%d",&n);
	printf("%d \n");
	
	 if(n==t)
    	{
	    	printf("ok\n");
	    	break;
		
    	}		
	 else
	{
		printf("try again");
	}
	
	}
	getch();
	return 0;
	
	
}
