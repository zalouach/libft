/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 00:47:36 by zalouach          #+#    #+#             */
/*   Updated: 2023/11/17 15:56:57 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
if (n ==  -2147483648 )
{
    write(fd,  "-2147483648", 11);
    return;
}
if (n < 0)
{
    write (fd, "-", 1);
    ft_putnbr_fd(-n, fd);
}
if (n >= 0 && n <= 9)
{
    // char c;
    char c = n + 48;
    write (fd, &c, 1);
}
if (n > 9)
{
    ft_putnbr_fd(n / 10, fd); 
    ft_putnbr_fd(n % 10, fd);
}
}
// int main ()
// {
//     int a = 100;

// //  FILE *ptr = fopen("tesssd.txt","w + r");
//  int fd = open ("file.txt", O_CREAT | O_RDWR , 0777);
// ft_putnbr_fd(a,fd);


// // fclose(ptr);

    
// }