/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:45:04 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/07 18:53:08 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	char	*casted_dest;
	char	*casted_src;
	size_t	i;

	casted_dest = (char *)dest;
	casted_src = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	if (casted_dest > casted_src)
	{
		while (n-- > 0)
			casted_dest[n] = casted_src[n];
	}
	else
	{
		while (i < n)
		{
			casted_dest[i] = casted_src[i];
			i++;
		}
	}
	return (dest);
}
