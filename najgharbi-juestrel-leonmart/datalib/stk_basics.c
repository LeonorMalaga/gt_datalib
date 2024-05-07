/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk_basics.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:27 by antgalan          #+#    #+#             */
/*   Updated: 2024/05/07 21:59:11 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

t_stack	*stk_new(void *data)
{
	// TODO
}

void	stk_push(t_stack **stack, void *data)
{
	// TODO
}

t_stack	*stk_pop(t_stack **stack)
{
	t_stack *aux;

	if (*stack == NULL)
		return (NULL);
	aux = *stack;
	*stack = (*stack)->next;
	aux->next = NULL;
	return (aux);
}

void	stk_clear(t_stack **stack)
{
	// TODO
}
