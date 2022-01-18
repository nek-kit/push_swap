/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:55:25 by rmoaney           #+#    #+#             */
/*   Updated: 2021/10/12 18:55:26 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_send_a(t_stack *st)
{
	while (st->b_len > 0)
	{
		st->a_min_l = ft_a_min(st);
		st->a_max_l = ft_a_max(st);
		if (st->b[0] < st->a[0])
		{
			if (st->b[0] < st->a_min_l && st->a[0] == st->a_min_l)
				ft_pa(st);
			else if (st->b[0] > st->a[st->a_len - 1])
				ft_pa(st);
			else
				ft_ra(st);
		}
		else if (st->b[0] > st->a_max_l && st->a[0] == st->a_min_l)
			ft_pa(st);
		else
			ft_ra(st);
	}
}

int	ft_sort_5(t_stack *st)
{
	int	i;

	i = 0;
	while (st->a_len > 3)
		ft_pb(st);
	st->a_min_l = ft_a_min(st);
	st->a_max_l = ft_a_max(st);
	i = -1;
	while (++i < st->a_len - 1)
	{
		if (st->a[i] == st->a_max_l && st->a[i + 1] == st->a_min_l)
		{
		}
		else if (st->a[i] > st->a[i + 1])
			ft_sa(st);
	}
	ft_send_a(st);
	while (ft_check_sort(st) != 0)
	{
		if (ft_check_sort(st) == 1)
			ft_ra(st);
		else
			ft_rra(st);
	}
	return (0);
}
