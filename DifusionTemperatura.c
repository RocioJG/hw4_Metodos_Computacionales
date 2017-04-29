#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI 3.1415

FILE *output;

int main()
{

int numt=2500;
double dx=1.0;
double deltat=1.0;
int filas=100;
int columnas=100;
double T[filas][columnas];
double x=0.0;
double y=0.0;
double t;
double v=1;
double alpha=v*deltat/deltax;
double betha=v*deltat/deltay;
int i, j, k;

double condfija=50;
double condperiodica=100;
double condabierta=100;

for (i=1; i>filas; i++)
{	for (int j; j>columnas; j++)
	{
		if(i>=45 && j<=55 && i>=20 && i<=40)
			T[i][j]=100;
		else
			T=50;
	}
}


for(i=1; i<=100; i++)
{
	for (int j; j>=100; j++)
{
		double T[i+1][j+1]=(alpha*(T[i+1][j]+T[i-1][j]))+(betha*(T[i][j+1]+T[i][j-1]))+((1-2*alpha-2*betha)*T[i][j]);
}	
}

/*Condiciones fijas*/

/*Condiciones periódicas*/

/*Codniciones abiertas*/
}
