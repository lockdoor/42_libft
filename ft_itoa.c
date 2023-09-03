/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/08/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates (with malloc(3)) and returns a string
	representing the integer received as an argument.
	Negative numbers must be handled.
*/

#include "libft.h"

static void	rev_string(char *s, int len)
{
	int	i;
	int	t;

	i = 0;
	while (i < len / 2)
	{
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = t;
		i++ ;
	}
}

char	*ft_itoa(int n)
{
	char	*tab;
	char	*num;
	long	nb;
	int		i;

	tab = (char *) malloc (12);
	if (!tab)
		return (NULL);
	nb = (long) n;
	if (nb < 0)
		nb *= -1;
	i = 0;
	while (nb / 10)
	{
		tab[i++] = nb % 10 + '0';
		nb /= 10;
	}
	tab[i++] = nb % 10 + '0';
	if (n < 0)
		tab[i++] = '-';
	tab[i] = 0;
	rev_string(tab, i);
	num = ft_strdup(tab);
	free (tab);
	return (num);
}
