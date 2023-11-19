/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:39:00 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/13 22:39:27 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	a;
	size_t			i;

	d = (unsigned char *)s;
	a = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (d[i] == a)
			return ((void *) &d[i]);
		i++;
	}
	return (NULL);
}
// int main ()
// {
// 	char *s = "zouhiralouach";
// 	int a = 'a';
// 	printf("%s",ft_memchr(s, a, -	));
// 	return (0);
// }
