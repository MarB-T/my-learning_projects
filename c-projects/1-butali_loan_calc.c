#include <stdio.h>

/**
 * main - Main entry point
 * Return: 0
 *
 */

int main(void)
{
	int principle, time;
	float anualised_interest, rate, interest, monthly_inst, perc_interest;

	printf("Enter loan principle: ");
	scanf("%d", &principle);
	printf("Enter repayment period in months: ");
	scanf("%d", &time);
	printf("Enter monthly rate: ");
	scanf("%f", &rate);
	
	interest = (((principle * rate * time) + 1) / 200) + (principle * 0.02);
	perc_interest = interest / (principle * 0.98) * 100;
	printf("\nThis calculation counts the 2-PERCENT insurance deducted as interest\n");
	printf("Percentage interest is: %.2f\n", perc_interest);
	printf("Total interes is: %.2f\n", interest);
	printf("Annualised interest is: %.2f\n", (perc_interest * 12 / time));
	monthly_inst = (principle + interest) / time;
	printf("Monthly pay is; %.2f\n", monthly_inst);
	return (0);
}
