#include "./libft.h"
//#include <stdio.h>

int ft_incharset(const int c, const char *charset)
{
  int i;

  i = -1;
  while (charset[++i])
  {
    if ((char)c == charset[i])
      return (1);
  }
  return (0);
}

char  *ft_strtrim(char const *s, char const *charset)
{
  int  i;
  int  j;

  i = -1;
  j = (int)ft_strlen(s);
  while (s[++i] && ft_incharset(s[i], charset) == 1);
  while (s[--j] && ft_incharset(s[j], charset) == 1);
  //printf("\nfound char from charset at pos i:%d j:%d len:%d in %s\n", i, j, j-i,s);
  //printf("got result: %s\n", ft_substr(s, i + 1, j - i));
  return (ft_substr(s, i, (j+1) - i));
}

/*int main(int argc, char **argv)
{
  (void)argc;
  ft_strtrim(argv[1], argv[2]);
  return (0);
}*/
