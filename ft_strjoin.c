/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:52:16 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/28 03:08:20 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	totalsize;
	int		index;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	totalsize = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)(malloc((totalsize + 1) * sizeof(char)));
	if (!res)
		return (NULL);
	index = 0;
	while (*s1)
	{
		res[index++] = *s1++;
	}
	while (*s2)
	{
		res[index++] = *s2++;
	}
	res[index] = '\0';
	return (res);
}
