/*
** list.h for y in /home/jihane/chawki_j
** 
** Made by CHAWKI Jihane
** Login   <chawki_j@etna-alternance.net>
** 
** Started on  Sat Nov  7 11:39:00 2015 CHAWKI Jihane
** Last update Sat Nov  7 12:19:58 2015 CHAWKI Jihane
*/

#ifndef __LIST_H
#define __LIST_H

typedef struct s_listdec
{
  char	*fr;
  char	*wesh;
  struct s_listdec *next;
}	t_listdec;
#endif
