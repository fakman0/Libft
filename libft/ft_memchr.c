/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:32:46 by fakman            #+#    #+#             */
/*   Updated: 2022/12/15 17:56:06 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (((char *)s)[i] != '\0' && n > 0)
	{
		if (((char *)s)[i] == (char)c)
			return (&((char *)s)[i]);
		i++;
		n--;
	}
	return ((void *) NULL);
}

/*int main()
{
	char s1[] = "teste";
	printf("%s\n", ft_memchr(s1,'s',3));
}*/