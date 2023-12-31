/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:52:16 by zalouach          #+#    #+#             */
/*   Updated: 2023/12/13 20:10:41 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	totalsize;
	int		index;
	int		indexs2;
	char	*res;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	index = -1;
	totalsize = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)(malloc((totalsize + 1) * sizeof(char)));
	if (!res)
		return (NULL);
	while (s1[++index])
		res[index] = s1[index];
	indexs2 = -1;
	while (s2[++indexs2])
		res[index++] = s2[indexs2];
	res[index] = '\0';
	return (res);
}
