#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main () {
	double D, x1, x2; int a=0, b=0, c=0;
	printf ("введите коэффициенты \n");
	scanf ("%d %d %d", a, b, c);
 	D=b*b-4*a*c;
	if (D < 0) printf ("корней нет");
	if (D == 0) {
		x1=(-b/2*a);
		printf ("корень равен %d", x1);
	}
	if (D > 0) {
		x1=((-b+sqrt(D))/2*a);
		x2=(-b-sqrt(D)/2*a);
		printf ("корени равны  %d %d", x1, x2);
	}
return 0;
}
