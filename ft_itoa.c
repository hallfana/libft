/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samberna <samberna@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:02:04 by samberna          #+#    #+#             */
/*   Updated: 2024/11/04 23:02:50 by samberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  count_nb(long long nb)
{
    size_t      count;

    count = 0;
    if (nb < 0)
    {
        nb *= -1;
        count++;
    }
    while (nb > 9)
    {
        nb /= 10;
        count++;
    }
    return (count + 1);
}

char    *ft_itoa(int n)
{
    char        *nbr;
    size_t      i;
    long long   nr;

    nr = n;
    nbr = (char*)malloc(sizeof(char) * (count_nb(nr) + 1));
    if (!nbr)
        return (NULL);
    i = count_nb(nr);
    while (i != 0)
    {
        nbr[i] = n % 10;
        nr = nr / 10;
        i--;
    }
    nbr[count_nb(nr) + 1] = '\0';
    return (nbr);
}