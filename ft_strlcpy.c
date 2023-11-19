/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:49:09 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/12 05:33:53 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize )
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	dstsize = dstsize - 1;
	if (dstsize == 0)
		return (len);
	while (src[i] != '\0' && i < dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/* int main ()
 {
    char *src = "zouhira";
    char dst[5];
    
    strlcpy(dst, src, 5);
    //ft_strlcpy(dst, src, 7); 
 }*/
