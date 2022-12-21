/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   ft_atoi.c                                                     :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: fakman <fakman@student.42kocaeli.com.tr>              +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2022/12/20 11:32:38 by fakman                       #+#    #+#              */
/*   Updated: 2022/12/20 11:32:38 by fakman                      ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c >= 9 && c <= 13 || c == ' ')
		return (1);
	return (0);
}

int	atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	sign = 1;
	i = 0;
	str = (char *)str;
	if (str[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1 && str[i] != '\0')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * sign);
}