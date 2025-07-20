#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	rev_num[15];
	int i = 0;

	if (nb == -2147483648)
	{
		write(1, "-2147483648",11);
		return;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-",1);
	}
	if (nb == 0)
	{
		write(1, "0",1);
		return;
	}
	while(nb > 0)
	{
		rev_num[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		write(1, &rev_num[i - 1],1);
		i--;
	}
}

