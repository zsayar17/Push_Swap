/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 02:25:33 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/25 03:19:04 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	reverserotate(t_list **liste)
{
	t_list	*holder;
	t_list	*holder2;

	holder = *liste;
	holder2 = *liste;
	while (holder->next)
	{
		if (!(holder->next->next))
			holder2 = holder;
		holder = holder->next;
	}
	holder2->next = NULL;
	holder2 = *(liste);
	holder->next = holder2;
	*liste = holder;
}

void	reverserotate_a(t_list **a, int *counter)
{
	if ((!(*a)) || !((*a)->next))
		return ;
	reverserotate(a);
	putstr("rra");
	(*counter)++;
}

void	reverserotate_b(t_list **b, int *counter)
{
	if ((!(*b)) || !((*b)->next))
		return ;
	reverserotate(b);
	putstr("rrb");
	(*counter)++;
}

void	reverserotate_both(t_list **a, t_list **b, int *counter)
{
	if ((!(*a)) || !((*a)->next)
		|| (!(*b)) || !((*b)->next))
		return ;
	reverserotate(a);
	reverserotate(b);
	putstr("rrr");
	(*counter)++;
}
