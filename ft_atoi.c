/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:11:37 by zalouach          #+#    #+#             */
/*   Updated: 2023/12/11 17:35:17 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	hand_long(long old_r, long r, int s)
{
	if (old_r != (r / 10))
	{
		if (s == 1)
			return (-1);
		return (0);
	}
	return (1);
}

static int	return_atoi(const char *str, int i, int s)
{
	long	r;
	long	old_r;

	r = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		old_r = r;
		r = r * 10 + (str[i] - '0');
		if (hand_long(old_r, r, s) == -1)
			return (-1);
		else if (hand_long(old_r, r, s) == 0)
			return (0);
		i++;
	}
	return (r * s);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		s;

	i = 0;
	s = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	return (return_atoi(str, i, s));
}
