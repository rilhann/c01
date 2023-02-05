#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int d;
	int c;

	c = a / b;
	d = a % b;
	*div = c;
	*mod = d;
}

int		main(void)
{
	int a  = 15;
	int b  = 5;
	int *div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);
	
	printf("Value of a is : %d",*div);
	printf("\nValue of b is : %d",*mod);
}
