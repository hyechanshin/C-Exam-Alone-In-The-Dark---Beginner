#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i;
    unsigned char result;

    i = 8;
    result = 0;
    while (i)
    {
        result = (result << 1) + (octet & 1);
        octet >>= 1;
        i--;
    }
    return (result);
}

int	main(void)
{
	unsigned char c;

	c = 'j';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
    write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}