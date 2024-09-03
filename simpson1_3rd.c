//Simpson's 1/3rd Method

#include<stdio.h>
#include<math.h>

float y(double x)
{
//	return(pow(x,4));
	return(1/(1+x*x));
}

int main()
{
	double se,so, low,up,h,j,result,s;
	int i, n;
	printf("Enter lower limit: ");
	scanf("%lf",&low);
	printf("Enter upper limit: ");
	scanf("%lf",&up);
	printf("Number of divisions: ");
	scanf("%d",&n);
	h=(up-low)/n;
	
	//Printing table
	printf("\nCalculating the values:\n");
	printf("\nX");
	for(j=low; j<=up; j=j+h)
	{
		printf(" | %lf ",j);
	}
	printf("\nY");	
	for(j=low; j<=up; j=j+h)
	{
		printf(" | %lf ",y(j));
	}
	
	//Calculation
	s = y(low) + y(up);
	for(i=1; i<n; i++)
	{
		if( i%2 == 0)
		{
			se = se + 2*y(low+i*h);
		}
		else
		{
			so = so + 4*y(low+i*h);
		}
	}
	result = h/3 * (s + se + so);
	printf("\nThe value of integration is %lf", result);
	return 0;
}



















