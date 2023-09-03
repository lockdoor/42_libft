/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/08/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates (with malloc(3)) and returns an array
	of strings obtained by splitting ’s’ using the
	character ’c’ as a delimiter. The array must end
	with a NULL pointer.
*/

#include "libft.h"

static char	**split(const char *s, int *idx)
{
	char	**sp;
	int		i;

	i = 0;
	while (idx[i] != -1)
		i++ ;
	sp = (char **) malloc (((i / 2) + 1) * sizeof(char *));
	if (!sp)
		return (NULL);
	i = 0;
	while (idx[i] != -1)
	{
		sp[i / 2] = ft_substr(s, idx[i], idx[i + 1] - idx[i]);
		i += 2;
	}
	sp[i / 2] = NULL;
	free (idx);
	return (sp);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		*index;

	if (s == NULL)
		return (NULL);
	index = (int *) calloc (ft_strlen(s) + 1, sizeof(int));
	j = 0;
	i = 0;
	index[j] = -1;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++ ;
		if (s[i])
			index[j++] = i;
		while (s[i] && s[i] != c)
			i++ ;
		if (index[j] > -1)
			index[j++] = i;
		index[j] = -1;
	}
	return (split(s, index));
}

/* this code is finish in one function but use more memory
char	**ft_split(const char *s, char c)
{
	int		start;
	int		i;
	int		j;
	char	**split;

	j = 0;
	i = 0;
	start = -1;
	split = (char **) malloc (ft_strlen(s));
	if (!split)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++ ;
		if (s[i])
			start = i;
		while (s[i] && s[i] != c)
			i++ ;
		if (start >= 0)
			split[j++] = ft_substr(s, start, i - start);
		start = -1;
	}
	split[j] = NULL;
	return (split);
}
*/
