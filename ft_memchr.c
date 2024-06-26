/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:56:36 by fakman            #+#    #+#             */
/*   Updated: 2023/06/27 18:56:36 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	int				i;
	unsigned char	*s;

	s = (unsigned char *)ptr;
	i = 0;
	while (n > 0)
	{
		if (s[i] == (unsigned char)c)
			return (&s[i]);
		i++;
		n--;
	}
	return ((void *) NULL);
}
