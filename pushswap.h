/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 02:20:34 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/27 02:34:51 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define MAX_VALUE 1
# define MIN_VALUE 1
# define MAX_VALUE_ID 0
# define MIN_VALUE_ID 0

typedef struct s_list{
	int					content;
	unsigned int		holder;
	struct s_list		*next;
}	t_list;

void	error(void);
void	putstr(char *ptr);
size_t	ft_strlen(const char *ptr);
int		ft_atoi(char *ptr);
int		getmedian(t_list *liste);
t_list	*createlist(void);
int		listsize(t_list *liste);
void	minimize(t_list **liste);
int		filllist(t_list **liste, int number);
void	onlyarg(t_list **liste, char *arg, int *argc);
void	checklist(t_list *liste);
int		checksort(t_list *liste);
int		checkintomedian(t_list *liste, int median);
int		findmin(t_list *liste, int which);
int		findmax(t_list *liste, int which);
void	movemintotop(t_list **liste, int *counter);
void	movemaxtotop(t_list **liste, int *counter);
void	push(t_list **liste1, t_list **liste2);
void	push_a(t_list **a, t_list **b, int *counter);
void	push_b(t_list **a, t_list **b, int *counter);
void	swap(t_list **liste);
void	swap_a(t_list **a, int *counter);
void	swap_b(t_list **b, int *counter);
void	swap_both(t_list **a, t_list **b, int *counter);
void	rotate(t_list **liste);
void	rotate_a(t_list **a, int *counter);
void	rotate_b(t_list **b, int *counter);
void	rotate_both(t_list **a, t_list **b, int *counter);
void	reverserotate(t_list **liste);
void	reverserotate_a(t_list **a, int *counter);
void	reverserotate_b(t_list **b, int *counter);
void	reverserotate_both(t_list **a, t_list **b, int *counter);
void	radix(t_list **a, t_list **b, int *counter);
void	lessthan3(t_list **a, int *counter);
void	wheels(t_list **a, t_list **b, int *counter);
void	packet(t_list **a, t_list **b, int *counter);
void	pushswap(t_list **a, t_list **b, int argc, int *counter);

#endif
/*
# define pb push_b(a, b, counter)
# define pa push_a(a, b, counter)
# define sa swap_a(a, counter)
# define sb swap_b(b, counter)
# define ss swap_both(a, b, counter)
# define ra rotate_a(a, counter)
# define rb rotate_b(b, counter)
# define rr rotate_both(a, b, counter)
# define rra reverserotate_a(a, counter)
# define rrb reverserotate_b(b, counter)
# define rrr reverserotate_both(a, b, counter)
*/
