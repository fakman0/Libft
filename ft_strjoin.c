/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:34:17 by fakman            #+#    #+#             */
/*   Updated: 2022/12/16 15:08:13 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s1 = (char *)s1;
	s2 = (char *)s2;
	len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc((sizeof(char) * len) + 1);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[i])
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}

int main()
{
	char s1[] = "den";
	char s2[] = "se";
	printf("%s", ft_strjoin(s1,s2));
}