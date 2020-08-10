#include <stdlib.h>
#include <stdio.h>

int 	ft_atoi(const char *str)
{
    int i;
    int nbr;
    int sign;

    i = 0;
    nbr = 0;
    sign = 1;
    if (str[i] =='\0')
        return (0);
    while (str[i] ==  '\t' || str[i] ==  '\r' || str[i] ==  '\n' 
        || str[i] ==  '\f' || str[i] ==  '\t' || str[i] ==  ' ')
        i++;
    if (str[i] ==  '-' || str[i] ==  '+')
        if (str[i++] == '-')
            sign = -1;
    while (str[i] >= '0' && str[i] <= '9')
        nbr = (nbr * 10) + (str[i++] - '0');
    return (nbr * sign);
}

int main(void)
{
    printf("ft_atoi :%d\n", ft_atoi("12345"));
    printf("atoi :%d\n", atoi("12345"));
    printf("ft_atoi :%d\n", ft_atoi("-12345"));
    printf("atoi :%d\n", atoi("-12345"));

    return (0);
}