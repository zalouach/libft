/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 02:14:39 by zalouach          #+#    #+#             */
/*   Updated: 2023/12/13 13:47:36 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nz(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static	char	**free_all(char **s, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i && s[j] != NULL)
	{
		free(s[j]);
		s[j] = NULL;
		j++;
	}
	free(s);
	s = NULL;
	return (NULL);
}

static char	**ft_fill(char const *s, char c, char **spliter, size_t wc)
{
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	i = 0;
	while (i < wc)
	{
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		spliter[i] = ft_substr(s, start, end - start);
		if (!spliter[i])
			return (free_all(spliter, i));
		start = end;
		i++;
	}
	return (spliter);
}

char	**ft_split(char const *s, char c)
{
	char	**spliter;
	size_t	wc;

	if (!s)
		return (0);
	wc = ft_nz(s, c);
	spliter = ft_calloc((wc + 1) * sizeof(char *), 1);
	if (!spliter)
		return (0);
	return (ft_fill(s, c, spliter, wc));
}
