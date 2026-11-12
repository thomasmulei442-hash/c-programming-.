#include <stdio.h>

float convertTocelsius(float fahrenheit){
	
	float celsius;
	
	celsius = (fahrenheit - 32 ) * (5.0/9.0);
	
	return celsius;
}

int main(){
	
float fahrenheit, temperature;
	printf("Enter your temperature in fahrenheit:");
	scanf("%f", &fahrenheit);
	
	temperature = convertTocelsius(fahrenheit);
	
	printf("Temperature in celsius:%.2f", temperature);
	
	return 0;
}