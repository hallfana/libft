#include "libft.h"
#include <stdio.h>

int ft_countwords(char const *s, int c) 
{
  int i;
  int j;
  int in;

  while (s[i])
  {
    if (s[i] != (char)c && in != 1)
    {
      in = 1;
      j++;
    }
    if (s[i] == (char)c && in == 1)
      in = 0;
    i++;
  }
  return (j);
}

char  **ft_split(char const *s, char c)
{
  printf("%d", ft_countwords("asdasda*sd*", (int)'*'));
}

int main(void)
{
  ft_split("asd", 'a');
  return (0);
}
