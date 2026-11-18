#include<stdio.h>

int main (){
	double balance = 1000.0;
	double amount;
	printf("This is your bank balance:%.2f\n", balance);
	
	while(balance > 0){
		printf("Enter amount you to withdraw:");
		scanf("%lf", &amount);
		
		balance = balance - amount;
		printf("Balance after withdrawal:%.2f\n", balance);
		
	}
	printf("Balance is zero or negative.no more withdrawal allowed");
	
	return 0;
}