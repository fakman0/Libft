/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:57:02 by fakman            #+#    #+#             */
/*   Updated: 2022/12/15 17:25:50 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < (n - 1) && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

int main()
{
	char s1[] = "teste";
	char s2[] = "testt";
	printf("%d\n", ft_strncmp(s1,s2,5));
	printf("%d", strncmp(s1,s2,5));
}