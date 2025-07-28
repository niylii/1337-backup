/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 17:32:12 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/07/27 19:12:29 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s_len;
	unsigned int	d_len;
	unsigned int	tmp;

	i = 0;
	s_len = ft_strlen(src);
	d_len = ft_strlen(dest);
	tmp = ft_strlen(dest);
	if (d_len >= size)
		return (s_len + size);
	while (src[i] && i < size - d_len - 1)
	{
		dest[tmp] = src[i];
		i++;
		tmp++;
	}
	dest[tmp] = '\0';
	return (s_len + d_len);
}
