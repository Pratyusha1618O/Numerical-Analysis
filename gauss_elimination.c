// Gauss Elimination Method

#include<stdio.h>

int main()
{
	float a[3][4],k,l,m;
	float x,y,z;
	int i,j;
	
	printf("Enter the elements of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0; j<4; j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	
	k = a[1][0]/a[0][0];
	l = a[2][0]/a[0][0];
	for(i=0; i<4; i++)
	{
		a[1][i] = a[1][i] - (a[0][i] * k);
		a[2][i] = a[2][i] - (a[0][i] * l);
	}
	
	m = a[2][1]/a[1][1];
	for(i=0; i<4; i++)
	{
		a[2][i] = a[2][i] - (a[1][i] * m);
	}
	
	printf("\nThe reduced matrix is:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%f\t",a[i][j]);
		}printf("\n");
	}
	
	z = a[2][3]/a[2][2];
	y = (a[1][3] - a[1][2]*z) / a[1][1];
	x = ( a[0][3] - (a[0][2]*z) - (a[0][1]*y) ) / a[0][0];
	
	printf("\nx = %f , y = %f , z = %f",x,y,z);
	return 0;
}













