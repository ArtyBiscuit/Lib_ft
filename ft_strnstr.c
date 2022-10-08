/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:40:47 by arforgea          #+#    #+#             */
/*   Updated: 2022/10/08 14:59:34 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	char	*to_find;
	char	*str;

	to_find = (char *) little;
	str = (char *) big;
	i = 0;
	if (to_find[0] == '\0' || big == little)
		return (str);
	while (len-- || !to_find[i])
	{
		if (to_find[i] == '\0')
			return (str - i);
		if (*str == '\0')
			return (0);
		i++;
		if (*str != to_find[i - 1])
		{
			str -= i - 1;
			len += i - 1;
			i = 0;
		}
		str++;
	}
	return (0);
}
