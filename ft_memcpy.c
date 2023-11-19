/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 03:55:47 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/19 17:35:29 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == NULL && s == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
int main ()
{
    int s[] = {16} ;
    int d[] = {20004};
	int *b = ft_memcpy(s,d,2);
    printf("%d\n",*b);
	// printf("%s\n",memcpy(d,s,4));
    return (0);
}
