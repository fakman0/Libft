/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:56:56 by fakman            #+#    #+#             */
/*   Updated: 2023/06/27 18:56:56 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		((unsigned char *)dest)[i] = c;
		i++;
		len--;
	}
	return (dest);
}
