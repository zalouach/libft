/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:03:06 by zalouach          #+#    #+#             */
/*   Updated: 2023/12/12 17:30:25 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	a;
	size_t			i;

	if (!b && !c)
		return (NULL);
	s = (unsigned char *)b;
	a = (unsigned char )c;
	i = 0;
	while (i < len)
	{
		s[i] = a;
		i++;
	}
	return (s);
}
