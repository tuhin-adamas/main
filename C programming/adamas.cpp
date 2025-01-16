#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,d,p;
	printf("enter the member ship 1or0");
	scanf("%f",&a);
	if(a==1)
  {
  	printf("enter your value");
  	scanf("%f",&b);
        if(b>=100)
		{
			p=b*(10.0/100);
			d=b-p;
			printf("discount is availavle %f",d);
    	}
  	
    }	  	
	else if(a==0)
	{
		printf("enter the value");
		scanf("%f",&b);
		  if(b>=150)
		  {
		  	p=b*(5.0/100);
		  	d=b-p;
		  	printf("\nyou get a discount of %f",d);
		    }
			
		
		

    	else
	{
	    	printf("you will not get discount");
	}
   }
getch();
return 0;	
	
}
