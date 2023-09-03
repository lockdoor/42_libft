/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/08/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The ft_strrchr() function is identical to strchr(), except it locates the
	last occurrence of c.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*t;

	t = (char *) s;
	while (*t)
		t++;
	while (t >= s)
	{
		if (*t == (unsigned char) c)
			return (t);
		t-- ;
	}
	return ((void *) 0);
}
