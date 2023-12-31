/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:42:27 by zalouach          #+#    #+#             */
/*   Updated: 2023/12/09 22:17:38 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	long int	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_count(n);
	ptr = malloc(sizeof(char) * i +1);
	if (!ptr)
		return (ptr);
	ptr[i] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (n > 0 && i--)
	{
		ptr[i] = n % 10 + '0';
		n = n / 10;
	}
	return (ptr);
}
