#include "libft.h"

int ft_atoi(const char *ptr)
{
  long long i;
  long long sign;
  long long r;

  i = 0;
  sign = 1;
  r = 0;
  while (ptr[i] && ((ptr[i] >= 9 && ptr[i] <= 13) || ptr[i] == ' '))
    i++;
  if (ptr[i] && (ptr[i] == '-' || ptr[i] == '+'))
  {
    if (ptr[i] == '-')
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
