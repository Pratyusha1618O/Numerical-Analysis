// RK 2nd Order
#include<stdio.h>
#include<math.h>

float f(float x, float y)
{
	return(x+y*y);
}

int main()
{
	int i,n;
	float x0,y0,xn,y1,x1,h;
	printf("Enter the initial value of x : ");
	scanf("%f",&x0);
	printf("Enter the initial value of y : ");
	scanf("%f",&y0);
	printf("Enter the final value of x : ");
	scanf("%f",&xn);
	printf("Enter no of steps : ");
	scanf("%d",&n);
	
	h = (xn-x0)/n;
	
	for(i=0; i<n; i++)
	{
		x1 = x0+h;
		y1 = y0 + (f(x0,y0));
		y0 = y0 + ( (h/2) *(f(x0,y0) + f(x1 , y1)) );
	}	
	printf("Result: %f",y0);
	return 0;
}










