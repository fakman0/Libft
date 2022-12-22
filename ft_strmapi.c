/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:52:08 by fakman            #+#    #+#             */
/*   Updated: 2022/12/22 13:48:02 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char*))
{
	char	*res;
	int		i;
	size_t	s_len;

	i = 0;
	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (s_len + 1));
	while (i < s_len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*char	f_plus(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}*/

/*int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f_plus);
	printf("%s\n", str2);
}*/
