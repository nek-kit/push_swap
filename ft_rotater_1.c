/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotater_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:53:29 by rmoaney           #+#    #+#             */
/*   Updated: 2021/10/12 18:53:38 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ma_mb(t_stack *st)
{
	ft_rr(st);
	st->a_rot--;
	st->b_rot--;
}

void	ft_ma_pb(t_stack *st)
{
	ft_ra(st);
	ft_rrb (st);
	st->a_rot--;
	st->b_rot++;
}

void	ft_pa_pb(t_stack *st)
{
	ft_rrr(st);
	st->a_rot++;
	st->b_rot++;
}

void	ft_pa_mb(t_stack *st)
{
	ft_rra(st);
	ft_rb(st);
	st->a_rot++;
	st->b_rot--;
}
