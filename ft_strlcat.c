/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:53:51 by arforgea          #+#    #+#             */
/*   Updated: 2022/10/07 18:13:01 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	/*
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_s;
	unsigned int	src_s;

	src_s = ft_strlen(src);
	if (!dst && !size)
		return (src_s);
	dest_s = ft_strlen(dst);
	if (dest_s > size)
		return (src_s + size);
	i = dest_s;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (src_s + dest_s);
	*/
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	if (size < ft_strlen(dst))
		dstlen = size;
	else
		dstlen = ft_strlen(dst);
	if (dstlen == size)
		return (size + srclen);
	if (srclen < size - dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, size - dstlen - 1);
		dst[size - 1] = 0;
	}
	return (dstlen + srclen);
}
