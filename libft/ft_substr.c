/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:41:21 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/08 15:47:03 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	i;
	size_t	tmp;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) + 1 < len)
		tmp = ft_strlen(s);
	else
		tmp = len;
	copy = (char *)ft_calloc((tmp + 1), sizeof (char));
	if (copy == NULL)
		return (NULL);
	while (s[i] && i < tmp)
	{
		copy[i] = s[start + i];
		i ++;
	}
	copy[i] = '\0';
	return (copy);
}
