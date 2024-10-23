#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
  void    *ptr;
  size_t  i;

  if (nmemb * size >= 2147483647 || ((int)nmemb < 0 && (int)size < 0))
    return (NULL);
  if (nmemb == 0 || size == 0)
  {
    ptr = malloc(1);
    return (ptr);
  }
  i = 0;
  ptr = malloc(nmemb * size);
  while (i <= (nmemb * size))
  {
    (char)ptr[i] = 0;
    i++;
  }
  return (ptr);
}
