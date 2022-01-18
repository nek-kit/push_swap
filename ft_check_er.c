/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_er.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:46:17 by rmoaney           #+#    #+#             */
/*   Updated: 2021/10/12 18:50:46 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_minus(int c)
{
	if (c == '-')
		return (1);
	return (0);
}

int	ft_max_min_int(char *s)
{
	int	i;

	i = -1;
	if (ft_strlen(s) == 11 && ft_minus(s[0]) == 1)
	{
		while (s[++i] != 0)
			if (s[i] > "-2147483648"[i])
				return (0);
	}
	else if (ft_strlen(s) < 10 || (ft_strlen(s) == 10 && ft_minus(s[0]) == 1))
		return (1);
	else if (ft_strlen(s) == 10 && ft_minus(s[0]) == 0)
	{
		i = 0;
		while (s[i] != 0)
		{
			if (s[i] > "2147483647"[i])
				return (0);
			i++;
		}
	}
	else if (ft_strlen(s) > 10)
		return (0);
	return (1);
}

int	ft_check_er(int argc, char **argv, t_stack *st)
{
	int	i;
	int	j;
	int	c;

	i = 1;
	while (i < argc)
	{
		j = -1;
		while ((argv[i][++j]) != 0)
			if ((ft_isdigit(argv[i][j]) == 0) &&
					((ft_minus(argv[i][j]) == 0) && j != 0))
				return (1);
		if (ft_max_min_int(argv[i]) == 0)
			return (1);
		j = -1;
		while (++j < st->a_len)
		{
			c = -1;
			while (++c < st->a_len)
				if (st->a[j] == st->a[c] && j != c)
					return (1);
		}
		i++;
	}
	return (0);
}
