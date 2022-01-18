/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotater_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:53:52 by rmoaney           #+#    #+#             */
/*   Updated: 2021/10/12 18:53:55 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_m_a(t_stack *st)
{
	ft_ra(st);
	st->a_rot--;
}

void	ft_p_a(t_stack *st)
{
	ft_rra(st);
	st->a_rot++;
}

void	ft_m_b(t_stack *st)
{
	ft_rb(st);
	st->b_rot--;
}

void	ft_p_b(t_stack *st)
{
	ft_rrb(st);
	st->b_rot++;
}
