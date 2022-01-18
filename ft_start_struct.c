/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_struct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:24:07 by rmoaney           #+#    #+#             */
/*   Updated: 2021/10/12 19:24:12 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_a_max(t_stack *st)
{
	int	i;
	int	max;

	max = -2147483648;
	i = 0;
	while (i < st->a_len)
	{
		if (st->a[i] > max)
			max = st->a[i];
		i++;
	}
	return (max);
}

int	ft_a_min(t_stack *st)
{
	int	i;
	int	min;

	min = 2147483647;
	i = 0;
	while (i < st->a_len)
	{
		if (st->a[i] < min)
			min = st->a[i];
		i++;
	}
	return (min);
}
