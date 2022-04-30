/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:39:09 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/08 18:15:01 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_inmyset(char a, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (a == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	starting(char *str, char *set)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_inmyset(str[i], set) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	finishing(char *str, char *set)
{
	int	len;

	len = ft_strlen(str) - 1;
	while (len > 0)
	{
		if (is_inmyset(str[len], set) == 0)
			break ;
		len --;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*newstr;

	if (!s1 || !set)
		return (NULL);
	start = starting((char *)s1, (char *)set);
	end = finishing((char *)s1, (char *)set);
	newstr = ft_substr(s1, start, ((end - start) + 1));
	return (newstr);
}
