/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puteveryphing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samberna <samberna@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:26:10 by samberna          #+#    #+#             */
/*   Updated: 2024/11/05 02:38:17 by samberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
void    ft_putstr_fd(char *s, int fd)
{
    while (*s)
    {
        write(fd, &*s, 1);
        s++;
    }
}
void    ft_putendl_fd(char *s, int fd)
{
    while (*s)
    {
        write(fd, &*s, 1);
        s++;
    }
    write(fd, "\n", 1);
}
void    ft_putnbr_fd(int n, int fd)
{
    long    nb;

    nb = (long)n;
    if (nb < 0)
    {
        nb *= -1;
        ft_putchar_fd("-", fd);
    }
    if (nb < 10)
    {
        ft_putchar_fd((char)(nb + '0'), fd);
    }
    ft_putnbr_fd((nb / 10), fd);
    ft_putchar_fd((char)((nb % 10) + '0'), fd);
}