/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmih <sgmih@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:40:40 by sgmih             #+#    #+#             */
/*   Updated: 2025/01/31 14:57:04 by sgmih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push(t_list **src, t_list **dst)
{
	t_list	*top_src;

	if (!*src)
		return ;
	top_src = *src;
	*src = (*src)->next;
	top_src->next = NULL;
	ft_lstadd_front(dst, top_src);
}

void	push_a(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
}

void	push_b(t_list **stack_b, t_list **stack_a)
{
	push(stack_b, stack_a);
}
