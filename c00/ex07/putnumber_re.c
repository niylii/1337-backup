#include <unistd.h>

void putch(char c)
{
	write(1,&c,1);
}
void putnumber(int nb)
{

	if (nb < 0)
	{
		putch('-');
		nb = -nb;
	}
	if (nb == -2147483648)
		write(1, "2147483648",11);
	if (nb < 10 || nb >= 0)
		putch(nb + '0');
	if (nb == 0)
		return;
	putnumber(nb/10);
	putch(nb + '0');
	nb %= 10;
}

int main(void)
{
	putnumber(1);
	putch('\n');
	putnumber(0);
	putch('\n');
	putnumber(-0);
	putch('\n');
	putnumber(-1052);
	putch('\n');
	putnumber(-2147483648);
	putch('\n');
	putnumber(2147483647);
	putch('\n');
	
	return (0);
}
