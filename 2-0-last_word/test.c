#include <unistd.h>

int     main(int ac, char **av)
{
    int i;
    int start;

    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if (av[1][i] == ' ' && av[1][i + 1] != ' ' && av[1][i + 1] != '\0')
                start = i + 1;
            i++;
        }
        while (av[1][start] != '\0' && av[1][start] != ' ')
        {
            write(1, &av[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
