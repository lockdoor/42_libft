/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/08/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The ft_strncmp() function compares not more than n characters.  Because
	strncmp() is designed for comparing strings rather than binary data,
	characters that appear after a ‘\0’ character are not compared.
*/

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *(unsigned char *) s1 == *(unsigned char *) s2 && --n)
	{
		s1++ ;
		s2++ ;
	}
	return (*(unsigned char *) s1 - *(unsigned char *) s2);
}
