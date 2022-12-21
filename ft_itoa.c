/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   ft_itoa.c                                                     :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: fakman <fakman@student.42kocaeli.com.tr>              +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2022/12/21 14:42:59 by fakman                       #+#    #+#              */
/*   Updated: 2022/12/21 14:42:59 by fakman                      ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "libft.h"

static int	ft_digits(int n)
{
	int	digit;

	digit = 0;
	while (n > 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

static char	*ft_neg_itoa(int n)
{
	char	*res;
	int		i;
	int		j;
	int		pos;

	pos = (n * -1);
	j = ft_digits(pos) + 1;
	i = ft_digits(pos);
	res = (char *)malloc(sizeof(char) * (ft_digits(pos + 2)));
	if (!res)
		return (NULL);
	while (i != -1)
	{
		res[i] = (pos % 10) + 48;
		pos /= 10;
		i--;
	}
	res[j] = '\0';
	res[0] = '-';
	return (res);
}
char *ft_itoa(int n)
{
    char	*res;
	int		i;
	int		j;

	j = ft_digits(n);
	i = ft_digits(n) - 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == -0)
		return (ft_strdup("0"));
	if (n < 0)
		return (ft_neg_itoa(n));
	res = malloc(sizeof(char) * (ft_digits(n) + 1));
	if (!res)
		return (NULL);
	while (i != -1)
	{
		res[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	res[j] = '\0';
	return (res);
}

int	main()
{
	printf(ft_itoa(-12345));
}