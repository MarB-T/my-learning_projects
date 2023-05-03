#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * main - calculates the monthly installment and interest rate for reducing balance loan
 * Retrun: nothing
 */

int main(void)
{
	float rate, interest = 0, monthly_pay, perc_interest, principle;
	float time, ex, processing_fee, total_due;

	printf("Enter loan principle: ");
	scanf("%f", &principle);
	printf("Enter repayment period in months: ");
	scanf("%f", &time);
	printf("Enter monthly rate: ");
	scanf("%f", &rate);
	printf("Enter loan processing fee: ");
	scanf("%f", &processing_fee);

	putchar('\n');
	rate = rate/100;
	ex = pow((1 + rate), time);
	monthly_pay = (principle * rate * ex) / (-1 + ex);
	total_due = (monthly_pay *  time) + processing_fee;
	printf("Total due is: %.2f", total_due);

	interest = total_due - principle;
	perc_interest = (interest / principle) * 100;

	printf("\n");
	printf("Percentage interest is: %.2f\n", perc_interest);
	printf("Total interes is: %.2f\n", interest);
	printf("Annualised interest is: %.2f\n", (perc_interest * 12 / time));
	printf("Monthly pay is; %.2f\n", total_due / time);
	return (0);
}
