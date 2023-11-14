#include <stdio.h>

int main(){
	int n = 100;
	printf("Day so tu 1 - 100 la : ");
	for(int i = 1 ; i <= n ; i++){
		if(i % 3 == 0 && i % 5 != 0){
			printf("Fizz \t");
		}else if(i% 3 != 0 && i % 5 == 0){
			printf("Bizz \t");
		}else if(i % 3 == 0 && i % 5 == 0){
			printf("FizzBizz \t");
		}else{
			printf("%d \t",i);
		}4
	}
}
