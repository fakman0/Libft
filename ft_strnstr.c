/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:52:42 by fakman            #+#    #+#             */
/*   Updated: 2022/12/16 09:50:51 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while (haystack[i] && len > i)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return (&((char *)haystack)[i]);
		}
		i++;
	}
	return ((char *)haystack);
}

/*int main()
{
	char dest[] = "denemeyazi123";
	char src[] = "yazi";
	printf("%s", ft_strnstr(dest,src,9));
}*/