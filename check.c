/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:56:37 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/25 13:56:37 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	checksort(t_list *liste)
{
	if (!liste || !(liste->next))
		return (1);
	while (liste->next)
	{
		if (liste->content > liste->next->content)
			return (0);
		liste = liste->next;
	}
	return (1);
}

void	checklist(t_list *liste)
{
	t_list	*holder;

	while (liste->next)
	{
		holder = liste->next;
		while (holder)
		{
			if (holder->content == liste->content)
				error();
			holder = holder->next;
		}
		liste = liste->next;
	}
}

int	checkintomedian(t_list *liste, int median)
{
	while (liste)
	{
		if (liste->holder < (unsigned int)median)
			return (1);
		liste = liste->next;
	}
	return (0);
}
