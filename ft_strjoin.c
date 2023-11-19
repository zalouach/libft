/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:52:16 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/18 00:32:30 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  totalsize;
    int index;
    char    *res;
    
    if (!s1 || !s2)
    {
        if (s1)
            return ( ft_strdup(s1));
        else if (s2)
            return ( ft_strdup(s2));
        else
            return(ft_strdup(""));
    }
    totalsize = ft_strlen(s1) + ft_strlen(s2);
    res = (char *) (malloc((totalsize + 1) * sizeof(char)));
    if (!res)
    {
    return (NULL);
    }
    index = 0;
    while(*s1)
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
// int main ()
// {
//     char *s1 = "zouhir ";
//     char *s2 = "alouach";
//     printf("%s",ft_strjoin(s1,s2));
//     return (0);
// }