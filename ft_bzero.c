/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:26:49 by fakman            #+#    #+#             */
/*   Updated: 2022/12/16 11:26:35 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	counter;

	counter = 0;
	while (counter < n)
	{
		((unsigned char *)s)[counter] = '\0';
		counter++;
	}
}

/*
int main()
{
	char dizi[] = "merhaba";
	ft_bzero(dizi, 3);
	printf("%s", dizi);
}
*/