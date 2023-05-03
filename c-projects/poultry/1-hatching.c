#include <stdio.h>

/**
 * main - calculates profits margins doing hatching
 * Return: nothing
 */

int main(int argc, char **argv)
{
	float incub_cap, run_days, hatch_rate, incub_pw_rate;
	float pw_cost, pw_rate, f_egg_price, hatch_day_cost;
	float p10_price, p20_price, p30_price, p50_price;

	putchar('\n');
	printf("Enter Incubator capacity: ");
	scanf("%f", &incub_cap);
	printf("Enter Incubator power rating in watts: ");
	scanf("%f", &incub_pw_rate);
	printf("Enter number of units for KES 100: ");
	scanf("%f", &pw_rate);
	printf("Enter percentage hatching rate: ");
	scanf("%f", &hatch_rate);
	printf("Enter number of days the incubator runs: ");
	scanf("%f", &run_days);
	printf("Enter unit price of fertile egg: ");
	scanf("%f", &f_egg_price);
	putchar('\n');

	pw_cost = (((run_days * 24 * incub_pw_rate) / 1000) * 100) / pw_rate;
	hatch_day_cost = ((incub_cap * f_egg_price) + pw_cost) * 1.1;
	p10_price = (hatch_day_cost * 1.1) / (incub_cap * (hatch_rate / 100));
	p20_price = (hatch_day_cost * 1.2) / (incub_cap * (hatch_rate / 100));
	p30_price = (hatch_day_cost * 1.3) / (incub_cap * (hatch_rate / 100));
	p50_price = (hatch_day_cost * 1.5) / (incub_cap * (hatch_rate / 100));
	
	printf("Power cost is: %.2f\n", pw_cost);
	printf("Cost on Hatching day is: %.2f\n", hatch_day_cost);
	printf("Unit cost on Hatching day is: %.2f\n", (hatch_day_cost / (hatch_rate * incub_cap / 100)));
	printf("Selling price to make 10%% profit: %.2f Total profit: %.2f\n", p10_price, ((p10_price * (incub_cap * hatch_rate / 100)) - hatch_day_cost));
	printf("Selling price to make 20%% profit: %.2f Total profit: %.2f\n", p20_price, ((p20_price * (incub_cap * hatch_rate / 100)) - hatch_day_cost));
	printf("Selling price to make 30%% profit: %.2f Total profit: %.2f\n", p30_price, ((p30_price * (incub_cap * hatch_rate / 100)) - hatch_day_cost));
	printf("Selling price to make 50%% profit: %.2f Total profit: %.2f\n", p50_price, ((p50_price * (incub_cap * hatch_rate / 100)) - hatch_day_cost));

	return (0);
}
