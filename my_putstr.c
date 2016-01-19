/*
** my_putstr.c for put in /home/jihane/lib/chawki_j/libmy_01
** 
** Made by CHAWKI Jihane
** Login   <chawki_j@etna-alternance.net>
** 
** Started on  Fri Oct 23 20:08:32 2015 CHAWKI Jihane
** Last update Sat Oct 24 17:26:02 2015 CHAWKI Jihane
*/
void	my_putchar(char c);

void	my_putstr(char *str)
{
  while ( *str != '\0' )
    {
      my_putchar(*str);
      str++;
    }
}
