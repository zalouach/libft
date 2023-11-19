/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:57:49 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/07 22:01:12 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	char	a;

	p = (char *)s;
	a = (char)c;
	if (p == NULL)
		return (NULL);
	while (*p != '\0')
	{
		while (*p == a)
		{
			return (p);
		}
		p++;
	}
	return (NULL);
}

// int main ()
// {
// 	 const char *s = NULL ;
// 	int c = 'h';
// 	printf("%s",ft_strchr(s,c));
// 	return (0);
// }