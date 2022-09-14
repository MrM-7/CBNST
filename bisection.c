#include<stdio.h>
#include<math.h>

double f(double val){
	double x=val;
	return x*x*x-4*x-9;
}

double mid(double a, double b){
	double x = (a+b)/2;
	return x;
}

int main(){
	double a=2;
	double b=3;
	
	double x=0.0;
	
	int i=1;
	
	while(fabs(x-a)>0.0001 || fabs(x-b)>0.0001){
		x = mid(a,b);
		printf("%lf %d\n", x,i++);
		
		if(f(a)*f(x)<0)
			b=x;
		else if(f(b)*f(x) < 0)
			a=x;
	}
}
