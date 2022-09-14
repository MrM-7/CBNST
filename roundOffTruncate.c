/* Objective:-
				Write a Program to estimate absolute error , Relative error and percentage error using round off
				and truncation concept.
				
				Write a Program to find the root of any polynomial equation using bisection method correct upto 3decimal
				places.
				
				Write a Program to find a solution of given polynomial equation using regular falsy method correct upto
				4 decimal places.				
*/

#include<stdio.h>
#include<math.h>

double findTruncate(double x, int d){
	int a = (int)x;
	double copy = x-a;
	
	int c=d;
	while(d--){
		copy *= 10;
	}
	
	a = (int)copy;
	double temp = copy-a;
	
	while(c--) temp /= 10;
	
	double result = x-temp;
	return result;
}

double findRoundOff(double x, int d){
	int a = (int)x;
	double copy = x-a;
	
	int c=d+1;
	while(c--) copy *= 10;
	
	a= (int)copy;
	int last = a%10;
	
	int flag = (last>=5)?1:0;
	
	double ans = findTruncate(x,d);
	
	if(flag){
		int i=0;
		while(i<d){
			ans *= 10;
			i++;
		}
		
		ans  += 1;
		
		while(d--) ans /= 10;
	}
	
	return ans;
}

int main(){
	double x;
	printf("Enter X: ");
	scanf("%lf",&x);
	
	printf("Decimal Place: ");
	int d;
	scanf("%d",&d);
	
	
	double trun = findTruncate(x,d);
	printf("Absolute Error: %lf \n", fabs(x-trun));
	printf("Relative Error: %lf \n", fabs(x-trun)/x);
	printf("Percentage Error: %lf \n", (fabs(x-trun)/x)*100);
	
	
	return 0;
}










