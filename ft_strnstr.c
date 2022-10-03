/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:40:47 by arforgea          #+#    #+#             */
/*   Updated: 2022/10/01 14:14:29 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*to_find;
	char	*str;

	to_find = (char *) little;
	str = (char *) big;
	j = 0;
	i = 0;
	if (to_find[0] == '\0' || big == little)
		return (str);
	while (len--)
	{
		if (to_find[i] == '\0')
			return (str - i);
		if (*str == '\0')
			return (0);
		if (*str == to_find[i])
			i++;
		else if (*str != to_find[i])
			i = 0;
		str++;
		j++;
	}
	return (0);
}
