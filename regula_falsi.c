//Regula Falsi Method

#include<stdio.h>
#include<math.h>

double f(double x)
{
	return(x*log10(x)-1.2);
}

int main()
{
	double a, b, c, fc;
	printf("Enter 1st initial gauss: ");
	scanf("%lf",&a);
	printf("Enter 2nd initial gauss: ");
	scanf("%lf",&b);
	 
	if( f(a)*f(b) < 0)
	{
		printf(" a\t\t b\t\t c\t\t f(c)\n");
		printf("____________________________________________________\n");
		do{
			c = ((a*f(b))-(b*f(a)))/(f(b)-f(a));
			fc = f(c);
			
			if( f(c) == 0.0 )
			{
				printf("The root is %lf",c);
			}
			else if( f(c) < 0.0 ){
				a=c;
			}
			else{
				b=c;
			}
			printf(" %lf\t %lf\t %lf\t %lf\n",a,b,c,f(c));
		}while(fabs(f(c))>0.0001);
		printf("\nThe root is: %lf",c);
	}
	else{
		printf("Wrong initial gauss.");
	}
	return 0;
}
















