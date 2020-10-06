#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		max(int *tab, unsigned int len)
{
    int max;

    if (!len)
        return (0);
    max = tab[--len];
    while (len--)
        if (tab[len] > max)
            max = tab[len];
    return (max);
}

int    main(void)
{
    int *tab;

    if (!(tab = (int *)malloc(sizeof(int) * 5)))
        return (0);
    tab[0] = 2;
    tab[1] = 10;
    tab[2] = 6;
    tab[3] = 11;
    tab[4] = 4;
    printf("%d\n", max(tab, 5));
      return (0);    
}
