#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int tmp;

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			if (tab[a] < tab[b])
			{
				tmp = tab[a];
				tab[a] = tab[b];
				tab[b] = tmp;		
			}
			b++;
		}
		a++;
	}
}

int main()
{
	int idizi[13] = { 12, 32, 63, 11, 88, 92, 94, 65, 8, 72, 0, 1, 4 };
	ft_sort_int_tab(idizi, 13);
	int a;

	a = 0;
	while (a < 13)
	{
		printf("%d ", idizi[a]);
		a++;
	}
}
