#include <stdio.h>

/**
 * get_cons - returns the average feed consumption in grams
 * @age: age of birds in question
 * Return: approximate feed consumption at given age
 */

int feed_cost(int age)
{
	int cons_per_bird;

	switch (age)
	{
//		case 0 ... 1:
//			cons_per_bird = 10;
//			break;
		case 0 ... 2:
			cons_per_bird = (12 + 15) / 2;
			break;
		case 3:
			cons_per_bird = (15 + 35) / 2;
			break;
//		case 3 ... 4:
//			cons_per_bird = (20 + 35) / 2;
//			break;
		case 4 ... 6:
			cons_per_bird = (35 + 50) / 2;
			break;
		case 7 ... 8:
			cons_per_bird = (55 + 60) / 2;
			break;
		case 9 ... 15:
			cons_per_bird = (62 + 70) / 2;
			break;
		case 16 ... 27:
			cons_per_bird = (68 + 80) / 2;
			break;
		case 28 ... 100:
			cons_per_bird = (120 + 140) / 2;
			break;

	}
	return (cons_per_bird);

}

/**
 * main - calculate brooding cost
 * Return: nothing
 */

int main(void)
{
	int age, cons_p_bird, brood_days, birds, days_old;
	float t_cost, brood_pw, br_cost, pw_cost, pw_cost_per_day, feed_cost;
	char yes_no;

	printf("Enter heating elements power rate for 50 birds in watts: ");
	scanf("%f", &brood_pw);
	printf("Enter number of days chicks stay in brooder: ");
	scanf("%d", &brood_days);
	printf("Enter number of power units given for 100sh: ");
	scanf("%f", &pw_cost);
	printf("Enter cost of feed per 50k bag: ");
	scanf("%f", &feed_cost);

	pw_cost_per_day = (((brood_pw * 24) / 1000) / pw_cost) * 100;

	printf("Enter the number of chicks: ");
	scanf("%d", &birds);
	printf("Enter chicks age in days: ");
	scanf("%d", &age);
	t_cost = birds * age * pw_cost_per_day * 


	return (0);
}
