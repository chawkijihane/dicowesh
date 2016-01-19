
/*
** main.c for y in /home/jihane
** 
** Made by CHAWKI Jihane
** Login   <chawki_j@etna-alternance.net>
** 
** Started on  Thu Nov  5 16:52:02 2015 CHAWKI Jihane
** Last update Sat Nov  7 12:32:40 2015 CHAWKI Jihane
*/

#include <stdlib.h>
#include <unistd.h>
#include "list.h"

char    *readLine();
void    my_putchar(char c);
void    my_putstr(char *str);
int     my_strcmp(char *s1, char *s2);
void    my_affiche();
t_listdec       aff_dico_wesh(t_listdec *lst);
t_listdec       *ajout_def(char *weshNew, char *frNew, t_listdec *lst);
t_listdec       *wesh_to_fr(t_listdec *lst, char *weshNew);

int	main()
{
  char	*r;
  char	*wesh;
  char	*fr;
  t_listdec	*lst;
  int	f;

  f = 0;
  lst = malloc(sizeof(*lst));
  do
    {
      my_affiche();
      r = readLine();
      if (my_strcmp(r, "1") == 0)
	{
	  wesh = readLine();
	  fr = readLine();
	  ajout_def(wesh, fr, lst);
	}
    }
  while (f != 1);
  return (0);
}
