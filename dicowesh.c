/*
** dicowesh.c for y in /home/jihane/chawki_j
** 
** Made by CHAWKI Jihane
** Login   <chawki_j@etna-alternance.net>
** 
** Started on  Fri Nov  6 14:02:53 2015 CHAWKI Jihane
** Last update Sat Nov  7 12:27:50 2015 CHAWKI Jihane
*/

#include <stdlib.h>
#include "list.h"

void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strcmp(char *s1, char *s2);

t_listdec	*ajout_def(char *weshNew, char *frNew, t_listdec *lst)
{
  t_listdec	*Nlst;

  Nlst = malloc(sizeof(*Nlst));
  Nlst->wesh = weshNew;
  Nlst->fr = frNew;
  if (Nlst->next == (lst->next))
      Nlst->next = lst->next;
  else
      Nlst->next = NULL;
  if ((lst->fr) && (lst->wesh))
    lst->next = Nlst;
  else
    *lst = *Nlst;
  return (0);
}

void	aff_dico_wesh(t_listdec *lst)
{
  t_listdec *tp;

  tp = lst;
  while (tp)
    {
      my_putstr("Mot en wesh :");
      my_putstr(tp->wesh);
      my_putstr(" \n");
      my_putstr("traduction en français :");
      my_putstr(tp->fr);
      my_putstr("\n");
      tp = tp->next;
    }
}

void	my_affiche()
{
  my_putstr("----Bienvenue sur le DicoWesh !--------- \n");
  my_putstr("a : afficher le dictionnaire sous la forme wesh : fr \n");
  my_putstr("b : afficher le dictionnaire sous la forme fr : wesh \n");
  my_putstr("1 : ajouter une définition \n");
  my_putstr("2 : traduire du wesh au francais \n");
  my_putstr("3 : traduire du francais au wesh \n");
  my_putstr("***********************************\n");
}
