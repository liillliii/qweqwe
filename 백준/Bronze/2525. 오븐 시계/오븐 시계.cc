#include <stdio.h>


int main() {
   
	int h,m;
	int time;
	int H,M;
	scanf("%d %d" ,&h,&m);
	scanf("%d" ,&time);
	
	if(m+time<60){
		printf("%d %d",h,m+time);
	}
	else{
		H=(m+time)/60;
		M=(m+time)%60;
		if(h+H<24)
			printf("%d %d",h+H,M);
		else{
			printf("%d %d",h+H-24,M);
		}
	}
    return 0;
}