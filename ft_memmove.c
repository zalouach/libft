/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:03:46 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/11 21:15:33 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
// int main(){
// 	char s[17] = "zouhiralouach";
// 	char s1[17] = "zouhiralouach";

// 	// printf("%s\n", ft_memcpy(s1 + 3, s1, 13));
// 	printf("%s\n", ft_memmove(NULL, NULL, 0));
// 	// printf("%s\n", ft_memmove(s + 3, s, 13));

// return (0);
// }
