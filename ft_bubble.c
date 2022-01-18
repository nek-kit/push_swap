/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:44:25 by rmoaney           #+#    #+#             */
/*   Updated: 2021/10/12 18:45:55 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_bubble(t_stack *st)
{
	int	i;
	int	j;
	int	tmp;

	j = st->c_len - 1;
	while (j > 0)
	{
		i = 0;
		while (i < j)
		{
			if (st->c[i] > st->c[i + 1])
			{
				tmp = st->c[i];
				st->c[i] = st->c[i + 1];
				st->c[i + 1] = tmp;
			}
			i++;
		}
		j--;
	}
	st->a_mid = st->c[st->c_len / 2];
	return (0);
}

void	ft_c_start(t_stack *st)
{
	int	i;

	i = 0;
	while (i < st->a_len)
	{
		st->c[i] = st->a[i];
		i++;
	}
	st->c_len = st->a_len;
	ft_bubble(st);
}
