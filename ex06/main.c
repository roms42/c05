int main ()
{
	int i = 0;
	int nb = 2147483647;

	while (i <= nb)
	{
		if (ft_is_prime(i) == 1)
			printf("%d is prime \n", i);
		else
			printf("%d is NOT prime \n", i);
		i++;
	}
}
