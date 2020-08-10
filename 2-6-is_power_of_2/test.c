int	    is_power_of_2(unsigned int n)
{
    unsigned long i;

    i = 0;
    while (i < 0xffffffff)
    {
        if (i == n)
            i++;
        i *= 2;
    }

}