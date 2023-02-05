#include	<stdio.h>

int	ft_strlen(char *str)
{
	int	a;
	a = 0;

	while(str[a] != '\0')
	{
	a++;
	}
	return(a);
}

int	main()
{
	printf("%d", ft_strlen("rumeysa"));
}
