/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:40:24 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/15 09:38:18 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d1;
	unsigned char	*d2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	while (i < n)
	{
		if (d1[i] != d2[i])
			return ((int)d1[i] - d2[i]);
		i++;
	}
	if (i == n)
		i--;
	return ((int)d1[i] - d2[i]);
}

// int main ()
// {
//     int s1[5] = {1,2,3,4};
//     int s2[5] = {1,2,3,5};
//     printf("%d",ft_memcmp(s1, s2, 6 * sizeof(int)));
// }
