/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:49:49 by fakman            #+#    #+#             */
/*   Updated: 2022/12/23 12:15:06 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t		i;
	size_t		s_len;

	i = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

/*
void	f_plus(unsigned int i, char *c)
{
	char	str;
	*c = *c + 1;
}

int main()
{
	char str1[] = "abc";
	ft_striteri(str1, f_plus);
	printf("%s\n", str1);
}
*/