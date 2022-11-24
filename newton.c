#include<stdio.h>
#include<math.h>

#define EPS 0.0000001
#define NMAX 100

/*double f(double x){

	return (x + cos(x));

}

double df(double x){

	return(1. - sin(x));

}
*/

double f(double x);
double df(double x);


void newton(double x){

	int n = 0;
	double de;

	do{

		de = -f(x) / df(x);
		x += de;
		n++;
	
	}while(fabs(de) > EPS && n <= NMAX);

	if(n == NMAX) printf("error!\n");
	else printf("x = %f\n", x);

}

int main(){

	double x;

	printf("input initial value - ");
	scanf("%lf", &x);
	newton(x);
	return 0;

}
