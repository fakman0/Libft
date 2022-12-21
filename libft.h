/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   libft.h                                                       :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: fakman <fakman@student.42kocaeli.com.tr>              +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 0002/12/16 11:31:04 by man                          #+#    #+#              */
/*   Updated: 2022/12/20 14:27:29 by fakman                      ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>

int		ft_isalnum(int input);
int		ft_isalpha(int c);
int		ft_isascii(int input);
int		ft_isdigit(int num);
int		ft_isprint(int input);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
