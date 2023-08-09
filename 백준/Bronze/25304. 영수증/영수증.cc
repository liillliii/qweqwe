#include <stdio.h>

int main() {

	int total;		//총 금액
	int N;			//구매한 물건 갯수
	int Price;		//물건 가격
	int	TN=0;		//물건 갯수
	int sum=0;		//합계
	int i=0;
	
	scanf("%d", &total);
	scanf("%d" ,&N);
	
	for(i=1;i<=N; i++) {
		scanf("%d %d", &Price, &TN);

		sum += Price * TN;
	}

	if(total == sum){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}