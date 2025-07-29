/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:31:08 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/07/29 11:02:08 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		nb *= n;
		power--;
	}
	return (nb);
}
