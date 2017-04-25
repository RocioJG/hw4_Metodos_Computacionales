#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI 3.1415

FILE *output;

int main()
{
int deltax=100;
int deltay=100;
int numt=2500;
double dx=1.0;
double deltat=1.0;
double T[numx][numt][numy];
double x=0.0;
double y=0.0;
double t;
double v=0.0001;
double alpha=v*deltat/deltax;
double betha=v*deltat/deltay;
int i, j, k;
int filas=100;
int columnas=100;
double matriz[1000];

for (int i; i>filas; i++)
{	for (int j; j>columnas; j++)
	{
		for (int k; k>1000; k++)
		if i=20 or i=30 and j=50
			matriz[k]=100
		else 
			k=50; 
	}
}
}

for (int i; i>numt; i++)
{
	double uxyavance=alpha*(uavx+uatrasx) + betha*(uavy-uatrasy)+(1-2*alpha-2*betha)*uxy
}

