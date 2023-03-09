#include <stdio.h>
#include "p-finance_functions.h"

/**
 * get_nhif - Function to get payable NHIF given basic pay.
 * @n: the basic pay to get NHIF amount
 * Return: NHIF payable
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

/**
 * get_expenses - gets a list of expenses from user
 * Return: total expenses
 */

float get_expenses()
{
	struct expense {
		char name[30];
		double amount;
	};

	int num_expenses, i;
	float total = 0;
	
	printf("Enter the number of personal FIXED expenses: ");
	scanf("%d", &num_expenses);

	struct expense expenses[num_expenses];

	for (i = 0; i < num_expenses; i++)
	{
		printf("Enter name of expense %d: ", i + 1);
		scanf("%s", expenses[i].name);
		printf("Enter amount for %s: ", expenses[i].name);
		scanf("%lf", &expenses[i].amount);
	}
	putchar('\n');

	for (i = 0; i < num_expenses; i++)
	{
		printf("%s: %.2f\n", expenses[i].name, expenses[i].amount);
		total += expenses[i].amount;
	}
	putchar('\n');
	return (total);
}
