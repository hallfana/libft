size_t  count_nb(int nb)
{
    size_t count;
    long        n;

    count = 1;
    n = nb;
    if (n < 0)
    {
        count++;
        n *= -1;
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
}