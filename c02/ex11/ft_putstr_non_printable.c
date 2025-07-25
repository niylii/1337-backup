/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:37:31 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/07/24 21:26:25 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	char			*hex;
	int				i;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		c = str[i];
		if (!(c >= 32 && c <= 126))
		{
			write(1, "\\", 1);
			write(1, &hex[c / 16], 1);
			write(1, &hex[c % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
