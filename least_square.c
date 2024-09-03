// Least Square Method

#include<stdio.h>
#include<math.h>

int main()
{
	int n,i;
	float a,b, x[10],y[10], sumx=0, sumy=0, sumxy=0, sumx2=0;
	printf("Enter table size: ");
	scanf("%d",&n);
	
	printf("Enter values of X:\n");
	for(i=0;i<n;i++)
	{
		printf("X%d = ",i);
		scanf("%f",&x[i]);
	}
	
	printf("Enter values of Y:\n");
	for(i=0;i<n;i++)
	{
		printf("Y%d = ",i);
		scanf("%f",&y[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sumx = sumx + x[i];
		sumx2 = sumx2 + x[i]*x[i];
		sumy = sumy + y[i];
		sumxy = sumxy + x[i]*y[i];	
	}	
	
	a = ((sumx2*sumy - sumx*sumxy)*1.0 / (n*sumx2 - sumx*sumx)*1.0);
	b = ((n*sumxy - sumx*sumy)*1.0 / (n*sumx2 - sumx*sumx)*1.0);
	printf("\nThe line is Y = %f + %fX",a,b);
	return 0;
	
}











