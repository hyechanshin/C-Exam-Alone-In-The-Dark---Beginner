#include <stdio.h>
#include <stdlib.h>

int		ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int     *ft_rrange(int start, int end)
{
	int *res;
	int i;

	i = 0;
	res = (int *)malloc(sizeof(int) * ft_abs(end - start) + 1);
	while (end < start)
	{
		res[i] = end;
		end++;
		i++;
	}
	while (end > start)
	{
		res[i] = end;
		end--;
		i++;
	}
	res[i] = end;
	return (res);
}

int		main(void)
{
	int *res;
	int i;

	res = ft_rrange(5, -10);

	for (i = 0;i < 10; i++)
		printf("%d,", res[i]);
	printf("\n");
}
