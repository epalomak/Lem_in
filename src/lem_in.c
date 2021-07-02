/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epalomak <epalomak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 11:35:14 by epalomak          #+#    #+#             */
/*   Updated: 2021/07/02 16:11:05 by epalomak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lem_in.h"

void	display_error(int i)
{
	if (i == 1)
		ft_printf("Error : Invalid antfarm");
}

static	int	amount_of_ants()
{
	char	*line;
	int		nbr;
	int 	done;

	done = 0;
	while (get_next_line(0, line) && done == 0)
	{
		if (!ft_strchr(line, '#'))
		{
			nbr = ft_atoi(line);
			done = 1;
		}
	}
	return (nbr);

}

static	void	set_struct(t_lem *antfarm)
{
	antfarm->start = '\0';
	antfarm->end = '\0';
}

static	void	read_input(t_lem *antfarm)
{
	char	*line;
	int		i;

	i = 0;
	while (get_next_line(0, line))
	{
		if (!ft_strcmp(line, "##start"))
			i++;
		else if (!ft_strcmp(line, "##end"))
			i++;
		else if (ft_strchr(line, ' ') && !ft_strchr(line, '-'))
			is_room(line, &antfarm, i);
		else if (ft_strchr(line, '-') && !ft_strchr(line, ' '))
			is_link(antfarm, line);
		else
		{
			free(line);
			display_error(1);
		}
		free(line);
	}

}

int	main(void)
{
	t_lem	*antfarm;

	antfarm = (t_lem*)malloc(sizeof(t_lem));
	set_struct(&antfarm);
	antfarm->n_ants = amount_of_ants();
	read_input(&antfarm);
}