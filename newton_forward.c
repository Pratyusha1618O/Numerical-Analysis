//Newton's Forward Interpolation

#include<stdio.h>
#include<math.h>

// Calculation of u
float u_cal(float u, int n)
{
	float temp = u;
	int i;
	for(i=1; i<n; i++)
	{
		temp = temp * (u-i);
	}
	return temp;
}

// Calculating factorial of given number n
int fact(int n)
{
	int f,i;
	f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}

int main()
{
	int n,i,j;
	float x[10],y[10][10],value,sum,u;
	
	printf("Enter the size of data table: ");
	scanf("%d",&n);
	printf("Enter the values of X and Y:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f%f",&x[i],&y[i][0]);	
	}	
	printf("Enter the value to interpolate: ");
	scanf("%f",&value);
	
	//Calculating the forward interpolation table
	for(i=1; i<n; i++)
	{
		for(j=0; j<n-i; j++)
		{
			y[j][i] = y[j+1][i-1] - y[j][i-1];
		}
	}
	
	//Displaying forward difference table
	printf("\nDisplaying the forward difference table:\n ");
	printf("____________________________________________________\n");
	for(i=0; i<n; i++)
	{
		printf(" %f  ",x[i]);
		for(j=0; j<n-i; j++)
		{
			printf(" %f  ",y[i][j]);
		}printf("\n");
	}
	
	//initializing u and sum
	sum = y[0][0];
	u = (value - x[0])/(x[1] - x[0]);
	for(i=1; i<n; i++)
	{
		sum = sum + (u_cal(u,i) * y[0][i]) / fact(i);
	}
	printf("\nValue at %f is %f (approx)\n", value, sum);
	return 0;
}






















