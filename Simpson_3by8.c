#include<stdio.h>
#include<math.h>

float findValue(float x){
  return 1/(1+pow(x,2));
}

int main(){
  float a,b;

  printf("Enter limits: ");
  scanf("%f%f",&a,&b);

  int n;
  printf("Enter total no of intervals(should be multiple of 3): ");
  scanf("%d",&n);

  float h = (b-a)/n;

  float sum = findValue(a) + findValue(b);
  int pos = 1;

  for(float i=a+h; i<b; i=i+h){
    if(pos%3==0)
      sum += 2*findValue(i);
    else 
      sum += 3*findValue(i);

    pos++;
  }

  sum = (3*h*sum)/8;

  printf("Result: %f", sum);
}