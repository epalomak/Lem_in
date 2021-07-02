/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_form.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epalomak <epalomak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 11:35:20 by epalomak          #+#    #+#             */
/*   Updated: 2021/07/02 16:09:02 by epalomak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lem_in.h"

void	is_link(char *line, t_lem *antfarm)
{

}

void	is_command(char *line, t_lem *antfarm)
{
		if (ft_strchr(line, "##start"))
			antfarm->start == "next";
		else if (ft_strchr(line, "##end"))
			antfarm->end == "next";

}

void	is_room(char *line, t_lem *antfarm, int i)
{
	

	if (i == 1 && antfarm->start == '\0')
		;
	if (i == 2 && antfarm->end == '\0')
		;
	

}