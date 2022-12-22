/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:41:58 by fakman            #+#    #+#             */
/*   Updated: 2022/12/22 18:37:03 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int main()
{
	t_list	*res;
	t_list	*res1;

	res = ft_lstnew("test");
	res1 = ft_lstnew("test2");
	ft_lstadd_front(&res, res1);
	printf("%s", res);
}
*/