#include<stdio.h>
int main(){
	int a = 1;
	int userNum;
	printf("Enter a number:");
	scanf("%d",&userNum);
	while(a <= 10){
		printf("%d X %d = ", userNum, a);
		printf("%d\n", a*userNum);
		a++;
	}
}
