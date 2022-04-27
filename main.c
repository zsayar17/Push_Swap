/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 02:42:08 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/27 12:46:10 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		counter;

	a = NULL;
	b = NULL;
	counter = 0;
	if (argc == 2)
	{
		argc -= 2;
		onlyarg(&a, *(++argv), &argc);
		pushswap(&a, &b, argc, &counter);
	}
	else if (argc > 2)
	{
		argv++;
		while (*argv)
			filllist(&a, ft_atoi(*argv++));
		pushswap(&a, &b, argc - 1, &counter);
	}
	while (a)
	{
		printf("A: holder: %d content: %d\n", a->holder, a->content);
		a = a->next;
	}
	while (b)
	{
		printf("B: holder: %d content: %d\n", b->holder, b->content);
		b = b->next;
	}
		printf("step : %d\n", counter);
}
/*
while (a)
{
	printf("A: holder: %d content: %d\n", a->holder, a->content);
	a = a->next;
}
while (b)
{
	printf("B: holder: %d content: %d\n", b->holder, b->content);
	b = b->next;
}
	printf("step : %d\n", counter);
*/
