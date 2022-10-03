/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:32:18 by arforgea          #+#    #+#             */
/*   Updated: 2022/09/30 18:40:55 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*src;

	src = (char *) s;
	while (*src != '\0')
	{
		if (*src == c)
			return (src);
		else
			src++;
	}
	if (c == '\0')
		return (src);
	return (NULL);
}
