#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int i2;

    i = 0;
    while (s[i] !+ '\0')
    {
        i2 = 0;
        while (reject[i2] != '\0')
        {
            if (s[i] == reject[i2])
                return (i);
        }
        i++;
    }
    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

int main(void)
{
    char str[] = "1111115";
    char keys[] = "456";
    printf("ft_strcspn %ld\n", ft_strcspn(str, keys));
    printf("strcspn: %ld\n", strcspn(str, keys));

    return (0);
}