/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:21:09 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/08 15:56:19 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*conc;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(s1) || !(s2))
		return (NULL);
	conc = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);
	while (s1[j])
	{
		conc[j] = s1[j];
		j ++;
	}
	while (s2[i])
	{
		conc[j] = s2[i];
		j++;
		i++;
	}
	conc[j] = '\0';
	return (conc);
}
