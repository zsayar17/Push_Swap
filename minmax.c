/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minmax.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 02:34:38 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/25 02:34:38 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	findmin(t_list *liste, int which)
{
	int	counter;
	int	min;
	int	id;

	counter = 0;
	id = 0;
	min = liste->content;
	while (liste)
	{
		if (liste->content < min)
		{
			min = liste->content;
			id = counter;
		}
		liste = liste->next;
		counter++;
	}
	if (which)
		return (min);
	return (id);
}

int	findmax(t_list *liste, int which)
{
	int	counter;
	int	max;
	int	id;

	counter = 0;
	id = 0;
	max = liste->content;
	while (liste)
	{
		if (liste->content > max)
		{
			max = liste->content;
			id = counter;
		}
		liste = liste->next;
		counter++;
	}
	if (which)
		return (max);
	return (id);
}

void	movemintotop(t_list **liste, int *counter)
{
	int	min;
	int	isra;

	min = findmin(*liste, MIN_VALUE);
	if (findmin(*liste, MIN_VALUE_ID) < listsize(*liste) / 2)
		isra = 1;
	else
		isra = 0;
	while ((*liste)->content != min)
	{
		if (isra)
			rotate_a(liste, counter);
		else
			reverserotate_a(liste, counter);
	}
}

void	movemaxtotop(t_list **liste, int *counter)
{
	int	max;
	int	isrb;

	max = findmax(*liste, MAX_VALUE);
	if (findmax(*liste, MAX_VALUE_ID) < listsize(*liste) / 2)
		isrb = 1;
	else
		isrb = 0;
	while ((*liste)->content != max)
	{
		if (isrb)
			rotate_b(liste, counter);
		else
			reverserotate_b(liste, counter);
	}
}
