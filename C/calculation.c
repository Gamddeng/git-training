#include <stdio.h>

long factorial (int n)
{
	if (n == 0) return 1;
	else return n * factorial(n - 1);
}

long sum (int n)
{
	if (n == 0) return 0;
	else return n + sum(n - 1);
}

long sum1 (int n)
{
	if (n == 0) return 0;
	else return n + sum (n - 1) + sum1(n - 1);
}

long sum_of_factorial (int n)
{
	if (n == 0) return 1;
	else return n * factorial (n - 1) + sum_of_factorial(n - 1);
}

void main()
{
	int n;

	printf("n을 입력해 주세요 : ");
	scanf("%d", &n);

	printf("SUM(%d) = %ld\n", n, sum(n));
	printf("SUM1(%d) = %ld\n", n, sum1(n));
	printf("FACT(%d) = %ld\n", n, factorial(n));
	printf("FACT_SUM(%d) = %ld\n", n, sum_of_factorial(n));

}