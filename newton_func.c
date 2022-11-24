#include<stdio.h>
#include<math.h>

double f(double x){

	return (x + cos(x));

}

double df(double x){

	return(1. - sin(x));

}
