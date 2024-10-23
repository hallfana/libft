#include "libft.h"

int ft_atoi(const char *ptr)
{
  size_t  i;
  int     sign;
  size_t  r;

  i = 0;
  while (ptr[i] && ((ptr[i] >= 9 || ptr[i] <= 13) || ptr[i] == ' '))
    i++;
  if (ptr[i] && ptr[i] == '-')
  {
    sign *= -1;
    i++;
  }
  while (ptr[i] && (ptr[i] >= '0' && ptr[i] <= '9'))
  {
    r = r * 10 + ptr[i] - '0';
    i++;
  }
  return (r * sign);
}
