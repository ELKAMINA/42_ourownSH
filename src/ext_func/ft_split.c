/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:00:54 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/08 19:52:51 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (!s)
		return (0);
	if (s[0] == c)
		j = 0;
	while (s[i] && c != '\0')
	{
		if (s[i] == c)
		{
			j ++;
			while (s[i] == c)
				i++;
			if (!s[i])
				return (j - 1);
		}
		i++;
	}
	return (j);
}

static int	is_mychar(char c, char s)
{
	if (c == s)
		return (1);
	else
		return (0);
}

static char	*to_malloc(char const *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !is_mychar(str[i], c))
		i ++;
	word = (char *)malloc((i + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !is_mychar(str[i], c))
	{
		word[i] = str[i];
		i ++;
	}
	word[i] = '\0';
	return (word);
}

static char	**ft_malloc_error(char **tab, int j)
{
	while (j--)
		free(tab[j]);
	free(tab[j]);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		j;
	int		i;

	i = 0;
	j = 0;
	tab = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	while (s && s[i])
	{
		while (s[i] && is_mychar(s[i], c))
			i++;
		if (s[i] && !is_mychar(s[i], c))
		{
			tab[j] = to_malloc((s + i), c);
			if (tab[j] == NULL)
				return (ft_malloc_error(&tab[j], count_words(s, c)));
			j++;
		}
		while (s[i] && !(is_mychar(s[i], c)))
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
