/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilits.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 01:48:04 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/25 14:09:19 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	error(void)
{
	putstr("Error");
	exit(0);
}

void	putstr(char *ptr)
{
	write(1, ptr, ft_strlen(ptr));
	write(1, "\n", 1);
}

size_t	ft_strlen(const char *ptr)
{
	size_t	counter;

	counter = 0;
	while (*ptr++)
		counter++;
	return (counter);
}

int	ft_atoi(char *ptr)
{
	long	number;
	int		isnegative;
	int		delimeter;

	number = 0;
	isnegative = 1;
	delimeter = 0;
	if (*ptr == '-')
		isnegative *= -1;
	if (*ptr == '-' || *ptr == '+')
	{
		ptr++;
		delimeter++;
	}
	while (*ptr)
	{
		if (!(*ptr >= 48 && *ptr <= 57))
			error();
		number = number * 10 + (*(ptr++) - 48);
		delimeter++;
	}
	number = number * isnegative;
	if (number > 2147483647 || number < -2147483648 || delimeter > 11)
		error();
	return ((int)number);
}

int	getmedian(t_list *liste)
{
	t_list	*liste1;
	t_list	*liste2;
	int		count;
	int		listesize;

	listesize = listsize(liste);
	liste1 = liste;
	while (liste1)
	{
		count = 0;
		liste2 = liste;
		while (liste2)
		{
			if (liste1->holder > liste2->holder)
				count++;
			liste2 = liste2->next;
		}
		if (count == listesize / 2)
			return (liste1->holder);
		liste1 = liste1->next;
	}
	return (-1);
}
