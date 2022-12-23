/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:14:24 by fakman            #+#    #+#             */
/*   Updated: 2022/12/23 11:06:27 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	counter;

	counter = 0;
	while (counter < len)
	{
		((unsigned char *)b)[counter] = c;
		counter++;
	}
	return (b);
}

/*
int main()
{
	char	str[] = "merhaba";
	printf("%s", ft_memset(str ,'a',3));
}
*/