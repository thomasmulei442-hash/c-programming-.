#include <stdio.h>

double calculateTax(double grossSalary)
{
	double tax;
	
	if(grossSalary < 30000)
	{
		
		tax = grossSalary * 0.05;
	}
	else if (grossSalary < 60000)
	{
		tax = grossSalary * 0.10;
	}
	else {
		tax = grossSalary * 0.15;
	}
	return tax;
	
}
int main()
{
	double grossSalary, tax,netSalary;
	
	printf("Enter gross salary: ");
	scanf("%lf", &grossSalary);
	
	tax = calculateTax(grossSalary);
	
	netSalary = grossSalary - tax;
	
	printf("\nGross salary:ksh%.2f\n",tax);
	printf("Tax Amount: ksh %.2f\n", tax);
	printf("Net salary : ksh %.2f\n",netSalary);
	
	return 0;
}