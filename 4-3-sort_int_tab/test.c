#include <unistd.h>
#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int tmp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

void ft_print_arr(int *tab, unsigned int size)
{
	unsigned int i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
}

int      main(void)
{
	int tab[] = {5, -4, 2, -7, 1, 0, -6};
	unsigned int size = sizeof(tab) / sizeof(*tab);
	ft_print_arr(tab, size);
	sort_int_tab(tab, size);
	ft_print_arr(tab, size);
}
