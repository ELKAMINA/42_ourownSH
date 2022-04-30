/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:30:32 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 17:33:43 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*copy;
	int		i;

	if (!s || !f)
		return (NULL);
	copy = (char *)malloc(sizeof (char) * (ft_strlen(s) + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy[i] = f(i, s[i]);
		++i;
	}
	copy[i] = '\0';
	return (copy);
}
