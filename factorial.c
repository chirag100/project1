#include<stdio.h>
int multiplyNumber(int n);

int main()
{
	int n;
	printf("Enter Number \n");
	scanf("%d", &n);
	printf("Factorial number is %d\n", multiplyNumber(n));
	return 0;

}

int multiplyNumber(int n)
{
	if(n>=1)
		return n*multiplyNumber(n-1);
	else
		return 1;

}