/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:53:20 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/19 19:02:53 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
int	ft_isalnum(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
// char	*ft_tohe(char *s)
// {
// 	int i ;
// 	int j;
// 	i = 0;
// 	j = 0;
		
// 	char *d = malloc(100);
	
// 	while (s[i])
// 	{
// 		if(ft_isalnum(s[i]) == 1)
// 		{
// 			d[j] = s[i];
// 			j++;
// 		}
// 	i++;
// 	}
// 	d[i] = '\0';
// 	return (d);
// }
// printf("%s",ft_tohe(b));
// }
#include <unistd.h>
int main()
{
 	char b[] = "H+E+L+L+O/2/0/2/3";
 	int i = 0;
	while (b[i])
	{
		if(ft_isalnum(b[i]) == 1)
		{
			write(1, &b[i], 1);
			
		}
		i++;
	}
}

