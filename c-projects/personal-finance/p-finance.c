#include <stdio.h>
#include "p-finance_functions.h"
#include "p-finance_functions.c"

/**
 * main - calculate personal finance the main program
 * Return: 0 Success
 */

int main(void)
{
	putchar('\n');
	
	const int relief = 2400;
	int insurance, nhif, nssf = 1080, sacco_savings, monthly_gross_pay, loan, helb;
	float tax, taxable_amount, total_deductions, athird, fexp;

	printf("Enter your gross monthly pay: ");
	scanf("%d", &monthly_gross_pay);
	printf("Enter HELB deduction: ");
	scanf("%d", &helb);
	printf("Enter loan deductions: ");
	scanf("%d", &loan);
	printf("Enter SACCO deductions and other savings: ");
	scanf("%d", &sacco_savings);
//	printf("Enter NSSF amount deducted: ");
//	scanf("%d", &nssf);
	printf("Enter non-taxable insurance you serve, 0 if none: ");
	scanf("%d", &insurance);

	putchar('\n');
	fexp = get_expenses();
	putchar('\n');
	athird = monthly_gross_pay / 3;
	taxable_amount = monthly_gross_pay - nssf - insurance;
	putchar('\n');
	printf("Taxable pay is: %.2f\n", taxable_amount);
	if (taxable_amount <= 24000)
	{
		tax = taxable_amount * 0.1;
	}
	else if (taxable_amount > 24000 && taxable_amount <= 32333)
	{
		tax = (24000 * 0.1) + ((taxable_amount - 24000) * 0.25);
	}
	else if (taxable_amount > 32333)
	{
		tax = (24000 * 0.1) + (8333 * 0.25) + ((taxable_amount - 32333) * 0.3);
	}
	putchar('\n');
	printf("Tax charged is: %.2f\n", tax);
	tax -= relief;
	nhif = get_nhif(monthly_gross_pay);
	total_deductions = tax + nssf + insurance + nhif + loan + helb + sacco_savings;

	putchar('\n');
	printf("Personal Relief is: %d\n", relief);
	printf("Tax payable is: %.2f\n", tax);
	printf("NHIF paid is: %d\n", nhif);
	printf("NSSF paid is: %d\n", nssf);
	printf("Loan servicing is: %d\n", loan);
	printf("SACCO deductions plus other savings is: %d\n", sacco_savings);
	printf("Total deductions is: %.2f\n", total_deductions);
	putchar('\n');
	printf("A third rule is capped at: %.2f\n", athird);
	printf("Net pay is: %.2f\n", (monthly_gross_pay - total_deductions));
	printf("Your fixed expenses: %.2f\n", fexp);
	printf("Surplus after fixed expenses: %.2f\n", (monthly_gross_pay - total_deductions - fexp));
	putchar('\n');
	printf("\tAmount above a third before your expenses is: %.2f\n", (monthly_gross_pay - total_deductions - athird));
	putchar('\n');
	return (0);
}
