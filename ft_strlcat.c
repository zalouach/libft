/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 01:42:12 by zalouach          #+#    #+#             */
/*   Updated: 2023/12/06 15:55:54 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	dstlen;
	size_t	dstlen_temp;
	size_t	srclen;

	srclen = ft_strlen(src);
	i = 0;
	if (!dst && dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	dstlen_temp = dstlen;
	if (!dstsize || dstsize <= dstlen)
		return (srclen + dstsize);
	while (src[i] && dstlen_temp < dstsize -1)
	{
		dst[dstlen_temp] = src[i++];
		dstlen_temp++;
	}
	dst[dstlen_temp] = '\0';
	return (dstlen + srclen);
}
