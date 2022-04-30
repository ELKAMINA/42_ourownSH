/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:35:25 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/07 20:32:19 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hays;

	i = 0;
	j = 0;
	hays = (char *)haystack;
	if (needle[0] == '\0' || needle == NULL)
		return (hays);
	while (hays[i] != '\0' && i < len)
	{
		j = 0;
		while (hays[i] == needle[j] && hays != '\0'
			&& needle[j] != '\0' && i < len)
		{
			i ++;
			j ++;
		}
		if (needle[j] == '\0' && i - j < len)
			return ((char *)hays + (i - j));
		i -= j;
		i++;
	}
	return (NULL);
}
