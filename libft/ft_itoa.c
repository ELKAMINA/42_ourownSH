/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:33:54 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/08 20:39:31 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sizeof_myint(long n)
{
	long	res;

	res = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		++res;
	while (n != 0)
	{
		n /= 10;
		++res;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		index_tab;
	long	n_long;

	n_long = n;
	index_tab = sizeof_myint(n_long);
	tab = (char *)malloc((sizeof_myint(n) + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	tab[index_tab] = '\0';
	if (n_long < 0)
	{
		tab[0] = '-';
		n_long *= -1;
	}
	else if (n_long == 0)
		tab[index_tab -1] = '0';
	while (n_long != 0)
	{
		tab[index_tab - 1] = (n_long % 10) + 48;
		n_long /= 10;
		index_tab --;
	}
	return (tab);
}
