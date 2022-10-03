/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:21:14 by arforgea          #+#    #+#             */
/*   Updated: 2022/10/01 16:52:40 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*final_tab;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		final_tab = ft_strdup("");
		return (final_tab);
	}
	final_tab = malloc(sizeof (char) * len + 1);
	if (!final_tab)
		return (NULL);
	ft_strlcpy(final_tab, s + start, len + 1);
	return (final_tab);
}
