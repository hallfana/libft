/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samberna <samberna@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:02:04 by samberna          #+#    #+#             */
/*   Updated: 2024/11/04 23:17:20 by samberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  count_nb(long long nb)
{
    int      count;

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
    long long   i;
    long long   nr;

    //printf("count_nb: %d\n", count_nb(n));
    nr = n;
    nbr = (char*)malloc(sizeof(char) * (count_nb(nr) + 1));
    if (!nbr)
        return (NULL);
    i = count_nb(nr);
    if (nr < 0)
        nbr[0] = '-';
    i++;
    while (i > 0)
    {
        //printf("%c, %d\n", (nr % 10) + '0', i - 1);
        nbr[i - 1] = (nr % 10) + '0';
        nr = nr / 10;
        i--;
    }
    //nbr[count_nb(nr)] = 'j';
    return (nbr);
}
/*
#include <stdio.h>
int main(int nigger, char** nigger_arr)
{
    printf("%s\n", ft_itoa(56425465));
    return 0;
}*/