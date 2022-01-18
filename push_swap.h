/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:23:39 by rmoaney           #+#    #+#             */
/*   Updated: 2021/10/12 19:38:22 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	a[5000];
	int	b[5000];
	int	c[5000];
	int	a_len;
	int	b_len;
	int	c_len;
	int	argc;
	int	a_min;
	int	a_max;
	int	a_mid;
	int	a_min_l;
	int	a_max_l;
	int	a_rot;
	int	b_rot;
}	t_stack;

size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
void	ft_sa(t_stack *st);
void	ft_sb(t_stack *st);
void	ft_ss(t_stack *st);
void	ft_pa(t_stack *st);
void	ft_pb(t_stack *st);
void	ft_ra(t_stack *st);
void	ft_rb(t_stack *st);
void	ft_rr(t_stack *st);
void	ft_rra(t_stack *st);
void	ft_rrb(t_stack *st);
void	ft_rrr(t_stack *st);
t_stack	*ft_start_struct(int argc, char **argv);
int		ft_a_max(t_stack *st);
int		ft_a_min(t_stack *st);
void	ft_c_start(t_stack *st);
int		ft_bubble(t_stack *st);
int		ft_check_er(int argc, char **argv, t_stack *st);
int		ft_minus(int c);
int		ft_max_min_int(char *s);
int		ft_check_sort(t_stack *st);
int		ft_sort(t_stack *st);
int		ft_sort_5(t_stack *st);
void	ft_max_mid(t_stack *st);
void	ft_min_mid(t_stack *st, int *i);
void	ft_half_sort(t_stack *st, int *i);
int		ft_rotate(t_stack *st);
void	ft_best_rot(t_stack *st, int i, int j, int *min);
void	ft_rotater(t_stack *st);
void	ft_best_rot_end(t_stack *st, int i, int j, int *min);
void	ft_ma_mb(t_stack *st);
void	ft_ma_pb(t_stack *st);
void	ft_pa_pb(t_stack *st);
void	ft_pa_mb(t_stack *st);
void	ft_m_a(t_stack *st);
void	ft_p_a(t_stack *st);
void	ft_m_b(t_stack *st);
void	ft_p_b(t_stack *st);
void	ft_send_a(t_stack *st);
void	ft_error(t_stack *st);

#endif
