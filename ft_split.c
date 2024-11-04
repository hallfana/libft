#include "libft.h"
//#include <stdio.h>

int ft_countwords(char const *s, int c) 
{
  int i;
  int j;
  int in;

  i = 0;
  j = 0;
  in = 0;
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

char  **ft_split(char const *str, char c)
{
  int     i;
  int     s;
  int     e;
  char**  dst;

  dst = (char**)malloc(sizeof(char*) * (ft_countwords(str, (int)c) + 1));
  if (!dst)
    return (NULL);
  i = 0;
  s = 0;
  e = 0;
  while (i < ft_countwords(str, (int)c))
  {
    while (str[s] == c)
      s++;
    e = s;
    while (str[e] != c)
      e++;
    i++;
  }
  return (dst);
}
/*
int main(void)
{
  ft_split("aaaaa6g4dab56g4aaa1b65tya14rty56bar14sd", 'a');
  return (0);
}
*/