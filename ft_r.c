/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:21:32 by rmoaney           #+#    #+#             */
/*   Updated: 2021/10/12 18:52:50 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack *st)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = st->a[0];
	if (st->a_len > 1)
	{
		while (i < st->a_len - 1)
		{
			st->a[i] = st->a[i + 1];
			i++;
		}
		st->a[st->a_len - 1] = tmp;
		write (1, "ra\n", 3);
	}
}

void	ft_rb(t_stack *st)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = st->b[0];
	if (st->b_len > 1)
	{
		while (i < st->b_len - 1)
		{
			st->b[i] = st->b[i + 1];
			i++;
		}
		st->b[st->b_len - 1] = tmp;
		write (1, "rb\n", 3);
	}
}

void	ft_rr(t_stack *st)
{
	int	i;
	int	tmp_a;
	int	tmp_b;

	tmp_a = st->a[0];
	tmp_b = st->b[0];
	if (st->a_len > 1 && st->b_len > 1)
	{
		i = 0;
		while (i < st->a_len - 1)
		{
			st->a[i] = st->a[i + 1];
			i++;
		}
		st->a[st->a_len - 1] = tmp_a;
		i = 0;
		while (i < st->b_len - 1)
		{
			st->b[i] = st->b[i + 1];
			i++;
		}
		st->b[st->b_len - 1] = tmp_b;
		write (1, "rr\n", 3);
	}
}
