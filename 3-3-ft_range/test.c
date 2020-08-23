#include <stdio.h>
#include <stdlib.h>

int		ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int		*ft_range(int start, int end)
{
	int *tab;
	int i;

	i = 0;
	tab = (int *)malloc(sizeof(int) * ft_abs(start - end) + 1);
	while (start < end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	tab[i] = start;
	while (start > end)
	{
		tab[i] = start;
		start--;
		i++;
	}
	tab[i] = start;
	return (tab);
}

int		main(void)
{
	int *res;
	int i;

	res = ft_range(5, -10);

	for (i = 0;i < 10; i++)
		printf("%d,", res[i]);
	printf("\n");
}