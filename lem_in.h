/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epalomak <epalomak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:47:41 by epalomak          #+#    #+#             */
/*   Updated: 2021/07/02 15:44:10 by epalomak         ###   ########.fr       */
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
	struct s_links	*links;
	

}					t_lem;

typedef struct		s_links
{
	char			*from_room;
	char			*to_room;
	struct s_link	*next;
}					t_links;


#endif