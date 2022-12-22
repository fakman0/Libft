/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:12:53 by fakman            #+#    #+#             */
/*   Updated: 2022/12/22 14:26:35 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int	main()
{
	int	fd;
	fd = open("new.txt", O_WRONLY | O_RDONLY | O_CREAT, 777);
	ft_putchar_fd('c', fd);
}
*/