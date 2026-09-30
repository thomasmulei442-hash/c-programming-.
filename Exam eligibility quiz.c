#include <stdio.h>

int main(){
	double attendance, average;
	
	printf("Enter your attendance percentage: ");
	scanf("%lf", &attendance);
	
	printf("Enter your averange marks: ");
	scanf("%lf", &average);
	
	
	if (attendance >= 75 && average >= 40){
	printf("Eligible");
	}
	else
	{		
	printf("Not eligible");
	}
		
	return 0;
	}