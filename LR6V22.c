#include <stdio.h>
#include <limits.h>
#include <math.h>

int main(void){
  float m[28], min=4,av,sum=0;
  int i,x=-14;
  printf("Lab 6. Variant 22\n\n");
  for (i = 0; i <= 28; i++) {
	m[i]=3*cos(0.7*x);
	x+=1;
	if (m[i]<min) {
	  min=m[i];
	}
	printf("No:%2d Element: %13.10f\n",i,m[i]);
  }
  for (i = 0; i <= 28; i+=2) {
	sum+=m[i];
  }
  av=sum/29;
  printf("\nMinimum:       %13.10f\n",min);
  printf("Average:       %13.10f\n\n",av);
  printf("Dimini Inc.\n");
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);
  getchar();
  return 0;
}
