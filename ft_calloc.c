#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
  void  *ptr;

  if (nmemb * size >= 2147483647 || (int)nmemb < 0 || (int)size < 0)
    return (NULL);
  if (nmemb == 0 || size == 0)
    return (malloc(1));
  ptr = malloc(nmemb * size);
  return (ptr);
}
