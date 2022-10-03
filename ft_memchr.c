/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:25:07 by arforgea          #+#    #+#             */
/*   Updated: 2022/09/30 18:43:22 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*src;
	size_t	cmp;

	src = (char *)s;
	cmp = 0;
	while (cmp != n)
	{
		if (*src == c)
			return (src);
		cmp++;
		src++;
	}
	return (NULL);
}
