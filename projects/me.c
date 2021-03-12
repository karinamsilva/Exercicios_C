#include <stdio.h>
int main (void) {
	float n1, n2;
	printf("Digite as notas");
	scanf("%f %f", &n1,&n2);
	printf("A media e: %.1f\n", (n1+n2)/2);
	return 0;
}
