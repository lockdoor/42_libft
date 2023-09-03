/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/08/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The ft_strchr() function locates the first occurrence of c (converted to a
	char) in the string pointed to by s.  The terminating null character is
	considered to be part of the string; therefore if c is ‘\0’, the
	functions locate the terminating ‘\0’.
*/

char	*ft_strchr(const char *s, int c)
{
	char	*t;

	t = (char *) s;
	while (*t)
	{
		if (*t == (unsigned char) c)
			return (t);
		t++ ;
	}
	if (c == 0)
		return (t);
	return ((void *) 0);
}
