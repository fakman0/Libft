/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:09:11 by fakman            #+#    #+#             */
/*   Updated: 2022/12/16 14:34:03 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	char	*dst;
	int		i;
	int		j;

	src = (char *)s;
	dst = (char *)malloc(sizeof(src) * (len + 1));
	if (!src)
		return (NULL);
	while (src[i])
	{
		if (i >= start && j < len)
		{
			dst[j] = src[i];
			j++;
		}
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
int main()
{
	char s[] ="denemeyazi123";
	printf("%s", ft_substr(s,4,8));
}
*/