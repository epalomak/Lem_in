/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epalomak <epalomak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:03:30 by epalomak          #+#    #+#             */
/*   Updated: 2021/07/08 16:13:34 by epalomak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lem_in.h"

int		ft_str_search(char **array, char *str, int count)
{
	int i;

	i = 0;
	while (i++ >= count)
	{
		if (!ft_strequ(array[i], str))
			return (0);
	}
	return (1);
}