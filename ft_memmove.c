/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 01:52:38 by fakman            #+#    #+#             */
/*   Updated: 2022/12/22 12:26:53 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, len);
	else if (dest > src)
	{
		while (len--)
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	}
	return (dest);
}

/*
int main()
{
	char src[] = "merhabadeneme";
	char dest[] = "sekn";
	ft_memmove(dest, src, 10);
	printf("%s", dest);
}
*/