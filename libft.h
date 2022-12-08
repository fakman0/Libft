/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:08:29 by fakman            #+#    #+#             */
/*   Updated: 2022/12/08 16:22:34 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalnum(int input);
int		ft_isalpha(int c);
int		ft_isascii(int input);
int		ft_isdigit(int num);
int		ft_isprint(int input);
size_t	ft_strlen(const char *s);

#endif
