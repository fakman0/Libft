/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:56:19 by fakman            #+#    #+#             */
/*   Updated: 2022/12/23 09:13:25 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	del(void	*c)
// {
// 	int	i;

// 	i = 0;
// 	while (((char *)c)[i] != '\0')
// 	{
// 		((char *)c)[i] = 0;
// 		i++;
// 	}
// }

/*
int main(void)
{
	t_list	*lst;
	
	lst = ft_lstnew(ft_strdup("çalış"));
	lst->next = ft_lstnew(ft_strdup("amk"));
	lst->next->next = ft_lstnew(ft_strdup("kodu"));
	
	ft_lstdelone(lst, del);
}
*/