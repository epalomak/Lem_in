/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epalomak <epalomak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:42:36 by epalomak          #+#    #+#             */
/*   Updated: 2021/05/04 14:38:33 by epalomak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
	}
}
