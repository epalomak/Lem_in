/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epalomak <epalomak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:47:41 by epalomak          #+#    #+#             */
/*   Updated: 2021/07/30 14:30:25 by epalomak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

#include "libft/libft.h"
#include <stdio.h>

typedef struct	s_lem
{
	long			n_ants;
	char			*start;
	char			*end;
	char			**links;
	char			**names;
	int				room_nbr;
	struct s_links	*links;

}					t_lem;

typedef struct		s_links
{
	char			*from_room;
	char			*to_room;
	struct s_link	*next;
}					t_links;

void	display_error(int i);
void	is_room(char *line, t_lem *antfarm, int i);
void	is_link(char *line, t_lem *antfarm);
int		ft_str_search(char **array, char *str, int count);

#endif