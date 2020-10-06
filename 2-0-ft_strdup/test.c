#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int     i;
    int     len;
    char    *tmp;

    i = 0;
    len = ft_strlen(src);
    tmp = (char *)malloc(sizeof(char) * len + 1);
    if (tmp == NULL)
        return (NULL);
    while (src[i] != '\0')
    {
        tmp[i] = src[i];
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}

int main() 
{ 
    char source[] = "GeeksForGeeks";
    char* target = strdup(source);
    char source2[] = "MAPADUBU";
    char* target2 = ft_strdup(source2);
    printf("%s\n", target); 
    printf("%s\n", target2); 
    return (0);
}
