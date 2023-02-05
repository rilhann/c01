#include	<stdio.h>

void	ft_ft(int *nbr)
{
	printf("nbr adress : %p\n", nbr);
	nbr[0] = 42;
}

int	main()
{
	int	a;
	a = 21;
	
	printf("a adress : %p\n", &a);
	printf("%d\n", a);
	ft_ft(&a);
	printf("%d", a);
}
