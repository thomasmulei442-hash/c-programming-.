#include <stdio.h>

int main(){
	int number;
	
	 printf("Guess a number ranging from 1 to 20:\n");
	 scanf("%d",&number);
	 
	 if(number > 10){
		 printf("TOO HIGH! guess lower number");
	 }
	 else if(number < 10){
		 printf("TOO LOW!,guess higher number");
	 }
	 else if (number == 10){
		 printf("CONGRATULATION!");
	 }
	 
	return 0;
}