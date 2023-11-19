/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 05:26:38 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/15 09:02:15 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void ft_putendl_fd(char *s,int fd)
{
    while (*s)
        write (fd, s++, 1);
    write (fd, "\n", 1);
}

// int main ()
// {
//      char *s = "zouhir";
//     int fd = open("fil3", O_CREAT | O_RDWR | O_TRUNC, 0777);
//     printf("%d\n", fd);
//     // FILE *ptr = fopen("tessst.txt","w + r");
  
//    ft_putendl_fd(s, fd);
//    close(fd);
// //    fclose(ptr);
// }