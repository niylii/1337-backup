/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 20:50:33 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/07/28 10:21:39 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_rev(char *str, int i)
{
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

int	ft_special(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	char	buff[14];
	int		i;

	i = 0;
	if (ft_special(nb) == 1)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
		buff[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	i--;
	ft_putstr_rev(buff, i);
}
