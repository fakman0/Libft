/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:56:11 by fakman            #+#    #+#             */
/*   Updated: 2022/12/16 02:44:10 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
		{
			return (((char *)s1)[i] - ((char *)s2)[i]);
		}
		i++;
		n--;
	}
	return (0);
}

/*
int main()
{
	char s1[] ="deneme";
	char s2[] ="dename";
	printf("%d", ft_memcmp(s1,s2,5));
}
*/