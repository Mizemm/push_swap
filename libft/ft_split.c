/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:19:21 by mizem             #+#    #+#             */
/*   Updated: 2024/05/28 12:47:22 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_nbr(char const *s, char c)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			return (nbr);
		while (s[i] && s[i] != c)
			i++;
		nbr++;
	}
	return (nbr);
}

static int	letters_nbr(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	**ft_free(char **str, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		y;
	int		nbr;
	char	**str;

	y = 0;
	i = 0;
	if (!s)
		return (NULL);
	nbr = words_nbr(s, c);
	str = (char **)malloc((nbr + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (nbr-- > 0)
	{
		while (s[i] && s[i] == c)
			i++;
		str[y] = ft_substr(s, i, letters_nbr(&s[i], c));
		if (str[y] == NULL)
			return (ft_free(str, y));
		i = i + letters_nbr(&s[i], c);
		y++;
	}
	str[y] = NULL;
	return (str);
}
