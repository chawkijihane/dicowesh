/*
** my_putchar.c for putchar in /home/jihane/lib/chawki_j/libmy_01
** 
** Made by CHAWKI Jihane
** Login   <chawki_j@etna-alternance.net>
** 
** Started on  Fri Oct 23 19:57:04 2015 CHAWKI Jihane
** Last update Fri Oct 23 20:07:21 2015 CHAWKI Jihane
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
