#include <stdio.h>

float calculateFare(float distance){

float fare;
int fee = 50;

fare = fee * distance;

return fare;
}
int main(){
	
	float distance ,totalFare;
	
	printf("Enter distance travelled in kilometers:");
	scanf("%f", &distance);
	
	totalFare = calculateFare(distance);
 
    printf("Your total fees is: KSH %.2f", totalFare);
	
	
	return 0;
}