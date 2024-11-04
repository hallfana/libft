/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samberna <samberna@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:02:04 by samberna          #+#    #+#             */
/*   Updated: 2024/11/04 22:54:24 by samberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  count_nb(int nb)
{
    size_t count;
    long        n;

    count = 0;
    n = nb;
    if (n < 0)
    {
        n *= -1;
        count++;
    }
    while (n > 9)
    {
        n /= 10;
        count++;
    }
    return (count + 1);
}

char    *ft_itoa(int n)
{
    char    *nbr;
    size_t  i;

    nbr = (char*)malloc(sizeof(char) * (count_nb(n) + 1));
    if (!nbr)
        return (NULL);
    i = count_nb;
    while (i != 0)
    {
        nbr[i] = n % 10;
        n = n / 10;
        i--;
    }
    return (nbr);
}