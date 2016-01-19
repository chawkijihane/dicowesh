/*
** my_strcmp.c for strcmp in /home/jihane/lib/chawki_j/libmy_01
** 
** Made by CHAWKI Jihane
** Login   <chawki_j@etna-alternance.net>
** 
** Started on  Sat Oct 24 14:39:19 2015 CHAWKI Jihane
** Last update Sat Oct 24 19:46:13 2015 CHAWKI Jihane
*/
int     my_strcmp(char *s1, char *s2)
{
  int    i;
  int res;

  i = 0;
  res = 0;
  while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
      i = i + 1;
    }
  if (s1[i] == '\0' && s2[i] == '\0')
    res = 0;
  if (s1[i] > s2[i])
    res = 1;
  if (s1[i] < s2[i])
    res = -1;
  return (res);
}
