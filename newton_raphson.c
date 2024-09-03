//Newton Raphson Method

#include<stdio.h>
#include<math.h>

double fx(double x)
{
//	return(x*x*x - 2*x -5);
	return(pow(x,3)-3*x-5);
}
double fdx(double x)
{
	
//	return(3*x*x -2);
	return(3*x*x - 3);
}

int main()
{
	int i=0;
	double a,b,xn=0.0,temp=0.0;
	printf("Enter 1st initial gauss: ");
	scanf("%lf",&a);
	printf("Enter 2nd initial gauss: ");
	scanf("%lf",&b);
	
	if( fx(a)*fx(b) >= 0.0)
	{
		printf("Wrong initial gausses.");			
	} 
	else{
		xn = (a+b)/2.0;
		printf("\n The initial point X%d = %lf\n",i,xn);
		do{
			i++;
			temp = xn;
			xn = xn - ( (fx(xn)) / (fdx(xn)) );
			printf("X%d = %lf\n",i,xn);
		}while(fabs(xn-temp)>0.001);
		printf("\nThe root of the given eqquation is %lf (approx)", xn);
	}
	return 0;
}











