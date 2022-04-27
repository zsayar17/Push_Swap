/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 01:53:19 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/25 03:18:52 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	swap(t_list **liste)
{
	t_list	*liste1;
	t_list	*liste2;

	liste1 = (*liste);
	liste2 = (*liste)->next;
	liste1->next = liste2->next;
	liste2->next = liste1;
	(*liste) = liste2;
}

void	swap_a(t_list **a, int *counter)
{
	if (!((*a)) || (!(*a)->next)
		|| ((*a)->next->content > (*a)->content))
		return ;
	swap(a);
	putstr("sa");
	(*counter)++;
}

void	swap_b(t_list **b, int *counter)
{
	if (!((*b)) || (!(*b)->next)
		|| ((*b)->next->content > (*b)->content))
		return ;
	swap(b);
	putstr("sb");
	(*counter)++;
}

void	swap_both(t_list **a, t_list **b, int *counter)
{
	if ((!((*a)) || (!(*a)->next))
		|| ((*a)->next->content > (*a)->content)
		|| (!((*b)) || (!(*b)->next))
		|| ((*b)->next->content > (*b)->content))
		return ;
	swap(a);
	swap(b);
	putstr("ss");
	(*counter)++;
}
