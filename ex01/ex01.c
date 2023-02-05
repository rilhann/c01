#include	<stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main()
{
	int	a;
	int	*b;
	int **c;
	int	***d;
	int	****e;
	int	*****f;
	int	******g;
	int	*******h;
	int	********ı;
	int	*********j;

	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	ı = &h;
	j = &ı;
	a = 20;

	printf("%p\n", b);
	printf("%p\n", *c);
	printf("%p\n", **d);

	printf("%d", *********j);
	ft_ultimate_ft(j);
	printf("%d", *********j);
}
