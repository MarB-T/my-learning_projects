#include <stdio.h>
#include <math.h>

/**
 * main - Program to calculate principle eligible for, given monthly installment and time
 * Return: 0 Success
 */

int main(void)
{
	float monthly_pay, time, ex, processing_fee;
	float interest, principle, rate;

	printf("Enter monthly pay amount: ");
	scanf("%f", &monthly_pay);
	printf("Enter payment time in months: ");
	scanf("%f", &time);
	printf("Enter monthly interest rate: ");
	scanf("%f", &rate);
	printf("Enter processing fee: ");
	scanf("%f", &processing_fee);

	rate /= 100;
	monthly_pay = (((monthly_pay * time) - processing_fee) / time);
	ex = pow((1 + rate), time);

	principle = ((monthly_pay * (ex - 1)) / (rate * ex));
	interest = ((monthly_pay * time) - principle) + processing_fee;

	printf("Principle given will be: %.2f\n", principle);
	printf("Interest paid will be: %.2f\n", interest);
	return (0);
}
