#include <stdio.h>


int main() {
   int H; 
   int M; 
   scanf("%d %d", &H, &M);
  
     if(M<45 && H<1){
		printf("%d %d", (24-1)-H,(60+M)-45);
     }
     else if(M<45 && H>=1){
		printf("%d %d", H-1, 60+M-45);
     }
     else if(M>=45 && H<=1){
		printf("%d %d", H, M-45);
     }
     else if(M>=45 && H>=1){
		printf("%d %d", H, M-45);
     }
  return 0;
}