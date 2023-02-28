#include <stdio.h>

/**
 * main - Program to calculate principle got, given monthly installment and time
 * Return: 0 Success
 */

int main(void)
{
	int monthly_pay, time;
	float interest, principle, rate;

	printf("Enter monthly pay amount: ");
	scanf("%d", &monthly_pay);
	printf("Enter payment time in months: ");
	scanf("%d", &time);
	printf("Enter monthly interest rate: ");
	scanf("%f", &rate);

	principle = ((200 * monthly_pay * time) -1) / (200 + (rate * time));
	interest = ((principle * rate * time) + 1) / 200;
	printf("Principle given will be: %.2f\n", principle);
	printf("Interest paid will be: %.2f\n", interest);
	return (0);
}
