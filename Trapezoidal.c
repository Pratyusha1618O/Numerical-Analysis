
//Trapezoidal Method......
//Numerical Integration

#include<stdio.h>
#include<math.h>

float y(double x)
{
//	return(1/(1+x*x));
//    return(log(x));
	return(1/x);
}

int main()
{
	double low, up, result, s, se, h, j;
	int i,n;
	
	printf("Enter lower limit: ");
	scanf("%lf",&low);
	printf("Enter upper limit: ");
	scanf("%lf",&up);
	printf("Number of divisions: ");
	scanf("%d",&n);
	
	h=(up-low)/n;
	
	//printing table
	printf("\nCalculating the values:\n");
	printf("\nx");
	
	for(j=low; j<=up; j=j+h)
	{
		printf(" | %lf",j);
	}
	printf("\ny");
	for(j=low; j<=up; j=j+h)
	{
		printf(" | %lf",y(j));
	}
	
	//Calculating the value of integration
	s = y(low)+y(up);
	se=0;
	for(i=1;i<n;i++)
	{
		se = se + 2*y(low+i*h);
	}
	result = h/2*(s+se);
	printf("\nThe integration is: %lf", result);
	return 0;
}















