/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:57:00 by rmoaney           #+#    #+#             */
/*   Updated: 2021/10/12 19:03:57 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate(t_stack *st)
{
	int	i;
	int	j;
	int	min;

	min = 100000;
	j = 0;
	while (j < st->b_len)
	{
		i = 0;
		while (i < st->a_len)
		{
			if (st->b[j] > st->a[i] && st->b[j] < st->a[i + 1])
				break ;
			i++;
		}
		ft_best_rot(st, i, j, &min);
		j++;
	}
	while (st->a_rot != 0 || st->b_rot != 0)
		ft_rotater(st);
	return (0);
}

void	ft_rotater(t_stack *st)
{
	if (st->a_rot > 0 && st->b_rot > 0)
		ft_ma_mb(st);
	else if (st->a_rot > 0 && st->b_rot < 0)
		ft_ma_pb(st);
	else if (st->a_rot < 0 && st->b_rot < 0)
		ft_pa_pb(st);
	else if (st->a_rot < 0 && st->b_rot > 0)
		ft_pa_mb(st);
	else if (st->a_rot > 0 && st->b_rot == 0)
		ft_m_a(st);
	else if (st->a_rot < 0 && st->b_rot == 0)
		ft_p_a(st);
	else if (st->a_rot == 0 && st->b_rot > 0)
		ft_m_b(st);
	else if (st->a_rot == 0 && st->b_rot < 0)
		ft_p_b(st);
}

void	ft_best_rot(t_stack *st, int i, int j, int *min)
{
	if (i < st->a_len - i && j < st->b_len - j && i + j < *min)
	{
		*min = i + j;
		st->b_rot = j;
		st->a_rot = i + 1;
	}
	else if (i < st->a_len - i && j > st->b_len - j && i + st->b_len - j < *min)
	{
		*min = i + st->b_len - j;
		st->b_rot = j - st->b_len;
		if (st->b_len < 3)
			st->b_rot = st->b_rot + 3;
		st->a_rot = i + 1;
	}
	else if (i >= st->a_len - i && j > st->b_len - j && st->a_len - i
		+ st->b_len - j < *min)
	{
		*min = st->a_len - i + st->b_len - j;
		st->b_rot = j - st->b_len;
		st->a_rot = i - st->a_len + 1;
	}
	else if (i >= st->a_len - i && j < st->b_len - j
		&& st->a_len - i + j < *min)
		ft_best_rot_end(st, i, j, min);
}

void	ft_best_rot_end(t_stack *st, int i, int j, int *min)
{
	*min = st->a_len - i + j;
	st->b_rot = j;
	st->a_rot = i - st->a_len + 1;
}

int	ft_sort(t_stack *st)
{
	int	i;

	i = 0;
	while (i <= st->a_len)
		ft_min_mid(st, &i);
	while (st->a_len != 3)
		ft_max_mid(st);
	i = 0;
	while (i < st->a_len - 1)
		ft_half_sort(st, &i);
	while (st->b_len > 0)
	{
		if (st->b[0] < st->a[0] && st->b[0] > st->a[st->a_len - 1])
			ft_pa(st);
		else
			ft_rotate(st);
	}
	while (ft_check_sort(st) != 0)
	{
		if (ft_check_sort(st) == 1)
			ft_ra(st);
		else
			ft_rra(st);
	}
	return (0);
}
