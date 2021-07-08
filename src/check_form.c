/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_form.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epalomak <epalomak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 11:35:20 by epalomak          #+#    #+#             */
/*   Updated: 2021/07/08 16:13:37 by epalomak         ###   ########.fr       */
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
	char	**name;
	int 	i;

	i = 0;
	if (line[0] == 'L')
		display_error(2);
	name = ft_strsplit(line, ' ');
	if (!ft_isdigit(ft_atoi(name[1])) || !ft_isdigit(ft_atoi(name[2])))
		display_error(2);
	if (i == 1 && antfarm->start == '\0')
	{
		antfarm->start = ft_strdup(name[0]);
		antfarm->names[antfarm->room_nbr] = ft_strdup(name[0]);
	}
	else if (i == 2 && antfarm->end == '\0')
	{
		antfarm->end = ft_strdup(name[0]);
		antfarm->names[antfarm->room_nbr] = ft_strdup(name[0]);
	}
	else
		antfarm->names[antfarm->room_nbr] = ft_strdup(name[0]);
	antfarm->room_nbr++;
}