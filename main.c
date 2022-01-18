/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 21:01:44 by rmoaney           #+#    #+#             */
/*   Updated: 2021/10/12 19:35:45 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_stack *st)
{
	free(st);
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_check_sort(t_stack *st)
{
	int	i;

	i = 0;
	while (i < st->a_len - 1)
	{
		if (st->a[i] > st->a[i + 1])
		{
			if (i >= st->a_len - i - 1)
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}

t_stack	*ft_start_struct(int argc, char **argv)
{
	t_stack	*st;

	st = NULL;
	st = malloc(sizeof(st));
	if (st == NULL)
		return (NULL);
	st->argc = argc;
	while (argc > 1)
	{
		st->a[argc - 2] = ft_atoi(argv[argc - 1]);
		argc--;
	}
	st->a_len = st->argc - 1;
	st->b_len = 0;
	argc = st->argc;
	while (argc != 0)
	{
		st->b[argc] = 0;
		argc--;
	}
	st->a_max = ft_a_max(st);
	st->a_min = ft_a_min(st);
	ft_c_start(st);
	return (st);
}

int	main(int argc, char **argv)
{
	t_stack	*st;
	int		i;

	st = NULL;
	i = 0;
	st = ft_start_struct(argc, argv);
	if (ft_check_er(argc, argv, st) != 0)
		ft_error(st);
	else if (argc != 1 && ft_check_sort(st) != 0)
	{
		if (st->a_len > 5)
			ft_sort(st);
		else
			ft_sort_5(st);
	}
	free(st);
	st = NULL;
	return (0);
}
