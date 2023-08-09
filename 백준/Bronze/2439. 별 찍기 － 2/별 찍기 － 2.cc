#include <stdio.h>


int main() {
   
	int i;
	int k;
	int j=0;
	scanf("%d", &i);

	for(k=1;k<=i;k++) {
		for(j=1;j<=i-k;j++){
			printf(" ");
		}
		for(j=1;j<=k;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}