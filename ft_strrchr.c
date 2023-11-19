/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:40:22 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/07 22:57:32 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	a;
	int		len;

	len = ft_strlen(p);
	p = (char *)s;
	a = (char )c;
	if (p == NULL)
		return (NULL);
	p = (p + len);
	while (*p != a)
	{
		p--;
	}
	if (*p == a)
	{
		return (p);
	}
	return (NULL);
}
