/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:19:22 by fakman            #+#    #+#             */
/*   Updated: 2022/12/22 12:23:11 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = (ft_strlen(s));
	while (s_len >= 0)
	{
		if (s[s_len] == c)
			return (&((char *)s)[s_len]);
		s_len--;
	}
	return ((char *) '\0');
}

/*
int main()
{
	char s[] = "deneme";
	printf("%s", ft_strrchr("yusuf",'u'));
}
*/