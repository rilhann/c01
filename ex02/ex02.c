#include	<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main()
{
	int	m;
	int	r;

	m = 10;
	r = 15;
	printf("%d %d", m, r);
	ft_swap(&m, &r);
	printf("%d %d", m, r);
}
