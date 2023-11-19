/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:11:37 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/19 18:29:23 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	r = 0;
	s = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * s);
}
int main ()
{
    printf("%d\n",ft_atoi("--46486"));
    // printf("%d\n",atoi(st));
}
