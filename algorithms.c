/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 01:50:43 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/25 14:12:24 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	lessthan3(t_list **a, int *counter)
{
	if ((*a)->next->next
		&& (*a)->next->next->content > (*a)->next->content
		&& (*a)->next->next->content < (*a)->content)
		rotate_a(a, counter);
	swap_a(a, counter);
	if (checksort(*a))
		return ;
	reverserotate_a(a, counter);
	swap_a(a, counter);
}

void	wheels(t_list **a, t_list **b, int *counter)
{
	while (listsize(*a) != 3)
	{
		movemintotop(a, counter);
		push_b(a, b, counter);
	}
	lessthan3(a, counter);
	while (*b)
		push_a(a, b, counter);
}

void	packet(t_list **a, t_list **b, int *counter)
{
	int	median;

	while (listsize(*a) >= 3)
	{
		median = getmedian(*a);
		while (checkintomedian(*a, median))
		{
			if ((*a)->holder < (unsigned int)median)
				push_b(a, b, counter);
			else
				rotate_a(a, counter);
		}
	}
	lessthan3(a, counter);
	while (*b)
	{
		movemaxtotop(b, counter);
		push_a(a, b, counter);
	}
}

void	radix(t_list **a, t_list **b, int *counter)
{
	int		min_bit;
	int		i;
	int		j;

	min_bit = 0;
	j = listsize(*a);
	while (min_bit < 32)
	{
		i = 0;
		while (*a && i < j)
		{
			if ((((*a)->holder >> min_bit) & 1) == 0)
				push_b(a, b, counter);
			else
				rotate_a(a, counter);
			i++;
		}
		while (*b)
			push_a(a, b, counter);
		if (checksort(*a))
			return ;
		min_bit++;
	}
}
