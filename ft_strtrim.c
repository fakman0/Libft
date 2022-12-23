/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:10:36 by fakman            #+#    #+#             */
/*   Updated: 2022/12/23 12:24:52 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		index;

	end = ft_strlen(s1);
	s1 = (char *)s1;
	set = (char *)set;
	start = 0;
	while (s1[start] && ft_check(s1[start], set))
		start++;
	while (end > start && ft_check(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (!str)
		return (NULL);
	index = 0;
	while (start < end)
	{
		str[index] = s1[start];
		index++;
		start++;
	}
	str[index] = '\0';
	return (str);
}

/*
int main()
{
	char s1[] = "abcdenemeabc";
	char set[] = "bca";
	printf("%s", ft_strtrim(s1, set));
}
*/