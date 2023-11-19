/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:41:59 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/19 12:11:43 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_chryes(char c, const char *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
   
    size_t start;
    size_t  end;
    

    start = 0;
    while(ft_chryes(s1[start],set) != 0)
    {
        start++;
        
    }
    end = ft_strlen(s1)-1;
    while(ft_chryes(s1[end],set)  )
    {
        end--;
    }
    char *s = malloc((end - start ) + 1);
    if (!s)
        return (NULL);
    int i = 0;
    while (s1[start] && start < end)
    {
        s[i++] = s1[start++];
    }
    s[i] = '\0';
    return (s);
}
int main ()
{
    printf("%s",ft_strtrim("abchellowabc","abc"));
    return (0);
}