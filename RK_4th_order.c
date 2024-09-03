// RK 4th Order
#include<stdio.h>
#include<math.h>

float f(float x, float y)
{
	return(x+y*y);
}

int main()
{
	int i,n;
	float k1,k2,k3,k4,k, h, x0,y0,x1;
	printf("Enter the initial value of x : ");
	scanf("%f",&x0);
	printf("Enter the initial value of y : ");
	scanf("%f",&y0);
	printf("Enter the final value of x : ");
	scanf("%f",&x1);
	printf("Enter no of steps : ");
	scanf("%d",&n);
	
	h=(x1-x0)/n;
	
	for(i=0; i<n; i++)
	{
		k1 = h * (f(x0,y0));
		k2 = h * (f( x0+h/2 , y0+k1/2 ));
		k3 = h * (f( x0+h/2 , y0+k2/2 ));
		k4 = h * (f( x0+h , y0+k3 ));
		k = (k1 + 2*k2 + 2*k3 + k4)/6;
		y0 = y0 + k;
		x0 = x0 + h;
	}
	
	printf("The final value of y is %f",y0);
	return 0;
}












