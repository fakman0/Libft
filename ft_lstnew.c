/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:19:09 by fakman            #+#    #+#             */
/*   Updated: 2022/12/23 12:35:39 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*res;

	res = (t_list *)malloc(sizeof(t_list) * 1);
	if (!res)
		return (0);
	res->content = content;
	res->next = NULL;
	return (res);
}

/*
int main()
{
	char	*s = "test";
	
	printf("%s", ft_lstnew((void *)"test")->content);
}
*/