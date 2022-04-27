/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 02:26:26 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/27 02:34:53 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	push(t_list **liste1, t_list **liste2)
{
	t_list	*holder;
	t_list	*holder2;

	holder = *liste1;
	holder2 = *liste2;
	*liste1 = (*liste1)->next;
	*liste2 = holder;
	(*liste2)->next = holder2;
}

void	push_b(t_list **a, t_list **b, int *counter)
{
	if (!(*a))
		return ;
	push(a, b);
	putstr("pb");
	(*counter)++;
}

void	push_a(t_list **a, t_list **b, int *counter)
{
	if (!(*b))
		return ;
	push(b, a);
	putstr("pa");
	(*counter)++;
}
/*
 liste1 basini liste2 ye atiyor
*/
