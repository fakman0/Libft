/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:10:44 by fakman            #+#    #+#             */
/*   Updated: 2022/12/23 11:36:54 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;

	index = 0;
	if (dstsize > 0)
	{
		while (index < (dstsize - 1) && src[index] != '\0')
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	while (src[index])
		index++;
	return (index);
}

/*int main()
{
    char dst[] ="merhaba";
    char src[] ="selam";
    printf("%lu", strlcpy(dst, src, 5));
    printf("%s", dst);
}*/