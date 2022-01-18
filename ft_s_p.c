/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:26:50 by rmoaney           #+#    #+#             */
/*   Updated: 2021/10/03 13:33:01 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack *st)
{
	int	tmp;

	if (st->a_len >= 2)
	{
		tmp = st->a[0];
		st->a[0] = st->a[1];
		st->a[1] = tmp;
		write(1, "sa\n", 3);
	}
}

void	ft_sb(t_stack *st)
{
	int	tmp;

	if (st->b_len >= 2)
	{
		tmp = st->b[0];
		st->b[0] = st->b[1];
		st->b[1] = tmp;
		write(1, "sb\n", 3);
	}
}

void	ft_ss(t_stack *st)
{
	int	tmp;

	if (st->a_len >= 2)
	{
		tmp = st->a[0];
		st->a[0] = st->a[1];
		st->a[1] = tmp;
		write(1, "s", 1);
	}
	if (st->b_len >= 2)
	{
		tmp = st->b[0];
		st->b[0] = st->b[1];
		st->b[1] = tmp;
		write(1, "s\n", 2);
	}
}

void	ft_pa(t_stack *st)
{
	int	i;

	i = st->a_len;
	if (st->b_len >= 1)
	{
		st->a_len++;
		while (i >= 0)
		{
			st->a[i] = st->a[i - 1];
			i--;
		}
		st->a[0] = st->b[0];
		st->b_len--;
		i = 0;
		while (i <= st->b_len)
		{
			st->b[i] = st->b[i + 1];
			i++;
		}
		write(1, "pa\n", 3);
	}
}

void	ft_pb(t_stack *st)
{
	int	i;

	i = st->b_len;
	if (st->a_len >= 1)
	{
		st->b_len++;
		while (i >= 0)
		{
			st->b[i] = st->b[i - 1];
			i--;
		}
		st->b[0] = st->a[0];
		st->a_len--;
		i = 0;
		while (i <= st->a_len)
		{
			st->a[i] = st->a[i + 1];
			i++;
		}
		write(1, "pb\n", 3);
	}
}
