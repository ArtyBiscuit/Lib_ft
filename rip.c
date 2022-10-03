/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:43:18 by arforgea          #+#    #+#             */
/*   Updated: 2022/09/29 23:49:46 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
	char	*src;
	int		cmp;

	src = (char *) s;
	cmp = ft_strlen(src);
	if (!src)
		return (src);
	while (cmp)
	{
		if (src[cmp] == c)
			return (src + cmp);
		cmp--;
	}
	if (c == '\0')
			return (src);
	return (NULL);
}

int main(int ac, char **av)
{
	(void)ac;
printf("%s\n", ft_strrchr(av[1], av[2][0]));	
	return 0;
}
