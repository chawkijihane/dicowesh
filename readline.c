/*
** readline.c for y in /home/jihane/chawki_j
** 
** Made by CHAWKI Jihane
** Login   <chawki_j@etna-alternance.net>
** 
** Started on  Fri Nov  6 17:04:21 2015 CHAWKI Jihane
** Last update Fri Nov  6 17:07:15 2015 CHAWKI Jihane
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

char  *readLine()
{
  ssize_t  ret;
  char     *buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
