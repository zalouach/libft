/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:40:22 by zalouach          #+#    #+#             */
/*   Updated: 2023/12/10 04:54:01 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*t;

	i = 0;
	t = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			t = ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		t = ((char *)&s[i]);
	return (t);
}
