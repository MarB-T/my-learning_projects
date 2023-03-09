#include <stdio.h>

/**
 * main - Program to calculate paye and net pay
 * Return: 0 Success
 * get_nhif -> Finds out payable nhif amount
 * @n: Gross salary passed
 * Return: nhif amount
 */

int get_nhif(int n)
{
	int nhif;

	switch(n)
	{
		case 6000 ... 7999:
			nhif = 300;
			break;
		case 8000 ... 11999:
			nhif = 400;
			break;
		case 12000 ... 14999:
			nhif = 500;
			break;
		case 15000 ... 19999:
			nhif = 600;
			break;
		case 20000 ... 24999:
			nhif = 750;
			break;
		case 25000 ... 29999:
			nhif = 850;
			break;
		case 30000 ... 34999:
			nhif = 900;
			break;
		case 35000 ... 39999:
			nhif = 950;
			break;
		case 40000 ... 44999:
			nhif = 1000;
			break;
		case 45000 ... 49999:
			nhif = 1100;
			break;
		case 50000 ... 59999:
			nhif = 1200;
			break;
		case 60000 ... 69999:
			nhif = 1300;
			break;
		case 70000 ... 79999:
			nhif = 1400;
			break;
		case 80000 ... 89999:
			nhif = 1500;
			break;
		case 90000 ... 99999:
			nhif = 1600;
			break;
		case 100000 ... 5000000:
			nhif = 1700;
			break;

	}
	return (nhif);
}



int main(void)
{
	putchar('\n');
	int insurance, nhif, fexp, nssf, sacco_savings, monthly_gross_pay, loan, helb;
	const int relief = 2400;
	float tax, taxable_amount, total_deductions, athird;
	printf("Enter your gross monthly pay: ");
	scanf("%d", &monthly_gross_pay);
	printf("Enter HELB deduction: ");
	scanf("%d", &helb);
	printf("Enter loan deductions: ");
	scanf("%d", &loan);
	printf("Enter SACCO deductions and other savings: ");
	scanf("%d", &sacco_savings);
	printf("Enter NSSF amount deducted: ");
	scanf("%d", &nssf);
	printf("Enter non-taxable insurance you serve, 0 if none: ");
	scanf("%d", &insurance);
	printf("Enter personal fixed expenses: ");
	scanf("%d", &fexp);

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
	printf("Personal Relief is: %d\n", relief);
	printf("Tax payable is: %.2f\n", tax);
	printf("NHIF paid is: %d\n", nhif);
	printf("NSSF paid is: %d\n", nssf);
	printf("Loan servicing is: %d\n", loan);
	printf("SACCO plus other savings is: %d\n", sacco_savings);
	printf("Total deductions is: %.2f\n", total_deductions);
	putchar('\n');
	printf("A third rule capped at: %.2f\n", athird);
	printf("Net pay is: %.2f\n", (monthly_gross_pay - total_deductions));
	printf("Your fixed expenses: %d\n", fexp);
	printf("Surplus after fixed expenses: %.2f\n", (monthly_gross_pay - total_deductions - fexp));
	putchar('\n');
	printf("Amount above a third before your expenses is: %.2f\n", (monthly_gross_pay - total_deductions - athird));
	putchar('\n');
	return (0);
}
