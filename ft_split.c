/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:20:07 by arforgea          #+#    #+#             */
/*   Updated: 2022/10/03 22:19:23 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_nb_line(char const *str, char c)
{
	int	i;
	int	nb_line;

	i = 0;
	nb_line = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			nb_line++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (nb_line);
}

void	set_tab(char **tab, char const *buff, char c)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	j = 0;
	w = 0;
	while (buff[i] != '\0')
	{
		while (buff[i] && buff[i] == c)
			i++;
		while (buff[i] && buff[i] != c)
		{
			tab[j][w] = buff[i];
			w++;
			i++;
		}
		tab[j][w] = '\0';
		w = 0;
		j++;
		while (buff[i] && buff[i] == c)
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		nb_line;
	int		nb_char;
	char	**final_tab;

	i = -1;
	j = -1;
	if (!s)
		return (0);
	if (!ft_strlen((char *)s))
		return ((char **)ft_strdup(""));
	nb_line = ft_nb_line(s, c);
	nb_char = 0;
	if (!nb_line)
		return ((char **)ft_strdup(""));
	final_tab = malloc(sizeof(char *) * nb_line);
	if (!final_tab)
		return (0);
	i = -1;
	while (s[++i] != '\0')
	{
		while (s[i] && s[++i] != c)
			nb_char++;
		final_tab[++j] = malloc(sizeof(char) * nb_char);
		nb_char = 0;
	}
	set_tab(final_tab, s, c);
	return (final_tab);
}


#include <stdio.h>
#include <string.h>

int main(void)
{
	// char *str = "Salut  l'amis...                      comment  va  ?";
	// char *str = "      split       this for   me  !       ";
	// char *str = "                              ";
	// char	*str = "                  olol";
	// char	*str = "split  ||this|for|me|||||!|";
	// char	*str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char	*str = "\0aa\0bbb";
	char **final_tab = ft_split(str, '\0');

	printf("str [%s]\n", str);
	int i = 0;
	while (i <= ft_nb_line(str, '\0'))
	{
		printf("%s\n", final_tab[i]);
		i++;
	}
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	printf("nb_line[%d]\n", ft_nb_line(argv[1], ' '));
// 	return (0);
// }
