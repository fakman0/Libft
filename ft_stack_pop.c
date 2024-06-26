/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:57:42 by fakman            #+#    #+#             */
/*   Updated: 2023/06/27 18:57:42 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_stack_pop(t_stack **root)
{
	t_stack	*tmp;
	t_stack *rvalue;
	if (*root == NULL)
	{
		ft_printf("stack is empty!\n");
		return (NULL);
	}
	tmp = *root;
	rvalue = ft_stack_new(tmp->x, tmp->y);
	*root = (*root)->next;
	free(tmp);
	return (rvalue);
}
