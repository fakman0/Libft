/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:43:29 by fakman            #+#    #+#             */
/*   Updated: 2022/12/15 14:37:10 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	c;
	unsigned int	d;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src)); // size dst'den küçük olursa ekleme yapılamayacağı için kontrol olarak return değeri verilir
	c = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d])); // & o karakterden itibaren geri kalan kısımın getirilmesini sağlar
}



/*int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";
	printf("ft_strcat :: %s :: %lu\n", s1, ft_strlcat(s1, s2,8));
}*/