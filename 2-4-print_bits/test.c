void	print_bits(unsigned char octet)
{
	int i;

	i = 256;
	while (i >>= 1)
		(octet & 1 ? write(1, "1", 1), write(1, "0", 1));
}
