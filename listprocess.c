/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listprocess.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 01:44:58 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/25 16:42:52 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*createlist(void)
{
	t_list	*liste;

	liste = (t_list *)malloc(sizeof(t_list));
	liste->next = NULL;
	liste->holder = 0;
	return (liste);
}

int	listsize(t_list *liste)
{
	int	count;

	count = 0;
	while (liste)
	{
		count++;
		liste = liste->next;
	}
	return (count);
}

int	filllist(t_list **liste, int number)
{
	t_list	*newliste;
	t_list	*holderliste;

	if (!(*liste))
	{
		*liste = createlist();
		(*liste)->content = number;
		return (1);
	}
	holderliste = *liste;
	while (holderliste->next)
		holderliste = holderliste->next;
	newliste = createlist();
	newliste->content = number;
	holderliste->next = newliste;
	return (1);
}

void	onlyarg(t_list **liste, char *arg, int *argc)
{
	char	*argholder;
	int		check;

	check = 0;
	while (*arg)
	{
		if (*arg != ' ')
		{
			if (!check)
				argholder = arg;
			check = 1;
		}
		else if (*arg == ' ')
		{
			*arg = 0;
			if (check)
				*argc += filllist(liste, ft_atoi(argholder));
			check = 0;
		}
		arg++;
	}
	if (check)
		*argc += filllist(liste, ft_atoi(argholder));
}

void	minimize(t_list **liste)
{
	t_list	*holder;
	t_list	*holder2;

	if (!(*liste))
		return ;
	holder = *liste;
	while (holder)
	{
		holder2 = *liste;
		while (holder2)
		{
			if (holder->content > holder2->content)
				holder->holder++;
			holder2 = holder2->next;
		}
		holder = holder->next;
	}
	holder = *liste;
}
