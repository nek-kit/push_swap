/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:55:03 by rmoaney           #+#    #+#             */
/*   Updated: 2021/10/12 18:55:05 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_min_mid(t_stack *st, int *i)
{
	if (st->a[0] > st->a_min && st->a[0] < st->a_mid)
		ft_pb(st);
	else
	{
		ft_ra(st);
		*i = *i + 1;
	}
}

void	ft_max_mid(t_stack *st)
{
	if (st->a[0] > st->a_mid && st->a[0] < st->a_max)
		ft_pb(st);
	else
		ft_ra(st);
}

void	ft_half_sort(t_stack *st, int *i)
{
	st->a_min_l = ft_a_min(st);
	st->a_max_l = ft_a_max(st);
	if (st->a[*i] == st->a_max_l && st->a[*i + 1] == st->a_min_l)
	{
	}
	else if (st->a[*i] > st->a[*i + 1])
		ft_sa(st);
	*i = *i + 1;
}
