/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 02:25:18 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/25 03:18:37 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rotate(t_list **liste)
{
	t_list	*holder;
	t_list	*holder2;

	holder = *liste;
	holder2 = *liste;
	while (holder->next)
		holder = holder->next;
	(*liste) = (*liste)->next;
	holder->next = holder2;
	holder2->next = NULL;
}

void	rotate_a(t_list	**a, int *counter)
{
	if ((!(*a)) || !((*a)->next))
		return ;
	rotate(a);
	putstr("ra");
	(*counter)++;
}

void	rotate_b(t_list **b, int *counter)
{
	if ((!(*b)) || !((*b)->next))
		return ;
	rotate(b);
	putstr("rb");
	(*counter)++;
}

void	rotate_both(t_list **a, t_list **b, int *counter)
{
	if ((!(*a)) || !((*a)->next)
		|| (!(*b)) || !((*b)->next))
		return ;
	rotate(a);
	rotate(b);
	putstr("rr");
	(*counter)++;
}
