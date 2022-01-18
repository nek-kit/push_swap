/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:38:26 by rmoaney           #+#    #+#             */
/*   Updated: 2021/10/03 14:38:36 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack *st)
{
	int	i;
	int	tmp;

	i = st->a_len - 1;
	tmp = st->a[st->a_len - 1];
	if (st->a_len > 1)
	{
		while (i > 0)
		{
			st->a[i] = st->a[i - 1];
			i--;
		}
		st->a[0] = tmp;
		write (1, "rra\n", 4);
	}
}

void	ft_rrb(t_stack *st)
{
	int	i;
	int	tmp;

	i = st->b_len - 1;
	tmp = st->b[st->b_len - 1];
	if (st->b_len > 1)
	{
		while (i > 0)
		{
			st->b[i] = st->b[i - 1];
			i--;
		}
		st->b[0] = tmp;
		write (1, "rrb\n", 4);
	}
}

void	ft_rrr(t_stack *st)
{
	int	i;
	int	tmp_a;
	int	tmp_b;

	tmp_a = st->a[st->a_len - 1];
	tmp_b = st->b[st->b_len - 1];
	if (st->a_len > 1 && st->b_len > 1)
	{
		i = st->a_len - 1;
		while (i > 0)
		{
			st->a[i] = st->a[i - 1];
			i--;
		}
		st->a[0] = tmp_a;
		i = st->b_len - 1;
		while (i > 0)
		{
			st->b[i] = st->b[i - 1];
			i--;
		}
		st->b[0] = tmp_b;
		write (1, "rrr\n", 4);
	}
}
