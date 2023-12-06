/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:57:49 by zalouach          #+#    #+#             */
/*   Updated: 2023/12/01 19:56:38 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	char	a;

	p = (char *)s;
	a = (char)c;
	while (*p != '\0')
	{
		while (*p == a)
		{
			return (p);
		}
		p++;
	}
	if (*p == a)
		return (p);
	return (NULL);
}
