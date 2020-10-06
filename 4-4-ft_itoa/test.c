#include <stdio.h>
#include <stdlib.h>

int     ft_div(len)
{
    int i;

    i = 1;
    if (len == 1)
        return (1);
    while (len > 1)
    {
        i *= 10;
        len--;
    }
    return (i);
}

int     nbr_len(nbr)
{
    int i;

    i = 1;
    while (nbr < 0)
    {
        nbr *= -1;
        i++;
    }
    while (nbr > 9)
    {
        nbr /= 10;
        i++;
    }
    return (i);
}

char	*ft_itoa(int nbr)
{
    int i;
    int len;
    int len2;
    char *tab;

    i = 0;
    len = nbr_len(nbr);
    len2 = len;
    if ((tab = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
        return (NULL);
    if (nbr == -2147483648)
        return ("-2147483648\0");
    while (nbr < 0)
    {
        tab[0] = '-';
        nbr *= -1;
        i++;
        len--;
    }
    while (i < len2)
    {
        tab[i] = ((nbr / ft_div(len)) % 10) + 48;
        i++;
        len--;
    }
    tab[i] = '\0';
    return (tab);
}

int     main(void)
{
    printf("%s", ft_itoa(-6543210));
    return (0);
}
