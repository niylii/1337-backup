/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:39:15 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/07/23 15:27:18 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	ft_ch_is_alpha(char ch)
{
	if (!((ch >= 'a' && ch <= 'z')
			|| (ch >= 'A' && ch <= 'Z')))
		return (0);
	return (1);
}

int	ft_ch_is_numeric(char ch)
{
	if (!(ch >= '0' && ch <= '9'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
		i++;
	}
	while (str[i])
	{
		j = i + 1;
		if (str[j] == '\0')
			break ;
		if (!ft_ch_is_alpha(str[i])
			&& !ft_ch_is_numeric(str[i])
			&& ft_ch_is_alpha(str[j]))
			str[j] -= 32;
		i++;
	}
	return (str);
}
