/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:38:32 by fakman            #+#    #+#             */
/*   Updated: 2022/12/23 01:51:18 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	if (!lst || !del)
		return ;
	tmp = (t_list *)malloc(sizeof(t_list) * 1);
	
	while (*lst)
	{
		tmp = *lst;
		//free((*lst)->content);
		//del((*lst)->content);
		//free((*lst)->content);
		
		*lst = tmp->next;
		free(tmp);
		
	}
	free(*lst);
	//lst = NULL;
	
}

void	del(void	*c)
{
	/*
	int	i;
	
	i = 0;
	while (((char *)c)[i] != '\0')
	{
		((char *)c)[i] = 0;
		i++;
	}*/
	free(c);
}

int main(void)
{
	t_list	*lst;
	char * str1 = ft_strdup("a");
	char * str2 = ft_strdup("a");
	char * str3 = ft_strdup("a");
	lst = ft_lstnew(str1);
	lst->next = ft_lstnew(str2);
	lst->next->next = ft_lstnew(str3);
	
	ft_lstclear(&lst, del);
	free (str1);
	free (str2);
	free (str3);
	free(lst);
	//while (1);
	system("leaks a.out");
}