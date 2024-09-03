/* Bisection Method */

#include<stdio.h>
#include<math.h>

double f(double x)
{
//	return(x*x-2);
	return((pow(x,3))-(2*x)-5); //x^3 -2x-5
}

int main()
{
	double err, a, b, c=0.0, temp;
	int i;
	printf("Enter 1st initial gauss: \n");
	scanf("%lf",&a);
	printf("Enter 2nd initial gauss: \n");
	scanf("%lf",&b);
	
	if( f(a)*f(b) >= 0.0)
	{
		printf("Wrong initial gauss");
	}
	else
	{
		printf(" a\t b\t c\t\t d\n", a,b,c,f(c));
		printf("_______________________________\n");
		do{
			temp=c;
			c = (a+b)/2;
			printf(" %lf\t %lf\t %lf\t %lf\n", a,b,c,f(c));
			if(f(c)==0.0)
			{
				printf("\nThe root of equation is %lf", c);
			}
			if(f(a)*f(c) < 0.0){
				b = c;
			}
			else{
				a = c;
			}
		}while(fabs(temp-c)>0.001);
		printf("\nThe root of equation is %lf",c);
	}
	return 0;
}
















