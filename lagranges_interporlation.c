//Lagrange's Interpolation 

#include<stdio.h>

int main()
{
	float x[25],y[25], xp, yp=0, p;
	int i,j,n;
	
//	input section
	printf("Enter number of data: ");
	scanf("%d",&n);
	printf("Enter data:\n");
	for(i=1; i<=n; i++)
	{
		printf("x[%d] = ",i);
		scanf("%f",&x[i]);
		printf("y[%d] = ",i);
		scanf("%f",&y[i]);
	}
	
	printf("Enter interpolation point: ");
	scanf("%f",&xp);
	
//	implementing lagrange's interpolation
	for(i=1; i<=n; i++)
	{
		p=1;
		for(j=1; j<=n; j++)
		{
			if(i != j){
				p = p * (xp - x[j])/(x[i] - x[j]);
			}
		}
		yp = yp + p*y[i];
	}
	printf("Interpolated value at %f if %f ", xp, yp);
	return 0;
}











