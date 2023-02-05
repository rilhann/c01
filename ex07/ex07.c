#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int a[size];
	int index;

	count = 0;
	index = size - 1;
	while (index >= 0)
	{
		a[count] = tab[index];
		index--;
		count++;
	}
	count = 0;
	while (count < size)
	{
		tab[count] = a[count];
		count++;
	}
}

int main()
{
	int idizi[5] = { 1, 2, 3, 4, 5 };
	ft_rev_int_tab(idizi, 5);
	int a;

	a = 0;
	while (a < 5)
	{
		printf("%d ", idizi[a]);
		a++;
	}
}
