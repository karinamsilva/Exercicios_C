#include <stdio.h>
int dv (int x){
	int t=0, p, s, d;
while(x>0) {
		s = x % 10;
		p = x /=10;
		t+=s;
		}
	    d = t%10;
	return d;
}

int main (void){
	int n1=7314, n2=972563;
		printf("Sua conta e digito: %07d-%d\n",n1,dv(n1));
		printf("sua conta e digito: %07d-%d\n",n2,dv(n2));
			return 0;
		}
