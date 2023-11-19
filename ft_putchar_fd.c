/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:22:28 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/15 09:02:09 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
void ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

// int main()
// {
//     char a = 'z';
//     int fd = open("trte",O_CREAT | O_RDWR | O_TRUNC, 0777);
//     printf("%d\n", fd);
//     ft_putchar_fd( a, fd);
//     close(fd);
// }