/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:03:06 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/07 22:35:28 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	a;
	size_t			i;

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
// int main ()
// {
//     int a = 1;
//    ft_memset(&a , 4, 3);
//    printf("%d\n", a);
//     return (0);
// }
