#include <stdio.h>

#define FUNDLEN 50
#define N 2
struct funds {
	char bank[FUNDLEN];
	double bandfunds;
	char save[FUNDLEN];
	double savefunds;
};

double sum(const struct funds money[], int n);

double sum(const struct funds *money, int n) {
	double total = 0;
	int i;

	for (i = 0; i <= n; i++) {
		total += money[i].bandfunds + money[i].savefunds;
		printf("%g\n", total);
	}
	return total;
}

int main() {
	struct funds jones[N] = {
		{
			"Garlic-Melon Bank",
			4032.27,
			"Lucky's Savings and Loan",
			8543.94
		},
		{
			"Honest Jack's Bank",
			3620.88,
			"Party Time Savings",
			3802.91
		}
	};
	printf("The Joneses have a total of $%.2f.\n", sum(jones, N));
	getchar();

	return 0;
}