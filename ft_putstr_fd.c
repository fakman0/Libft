/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:27:03 by fakman            #+#    #+#             */
/*   Updated: 2022/12/22 14:35:50 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	s_len;

	s_len = ft_strlen(s);
	i = 0;
	while (i < s_len)
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*
int	main()
{
	int	fd;
	fd = open("new.txt", O_WRONLY | O_RDONLY | O_CREAT, 777);
	ft_putstr_fd("deneme", fd);
}
*/