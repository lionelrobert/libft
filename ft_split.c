/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lirobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:01:06 by lirobert          #+#    #+#             */
/*   Updated: 2021/02/22 08:25:00 by lirobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	nbr_mots(char const *s, char c)
{
	unsigned int	nbrm;
	unsigned int	a;

	nbrm = 0;
	a = 0;
	while (s[a] != '\0')
	{
		while (s[a] == c && s[a] != '\0')
			a++;
		if (s[a] != '\0')
			nbrm++;
		while (s[a] != c && s[a] != '\0')
			a++;
	}
	return (nbrm);
}

void			copy(char const *s, char c, char *str)
{
	unsigned int	a;

	a = 0;
	while (s[a] != '\0' && s[a] != c)
	{
		str[a] = s[a];
		a++;
	}
	str[a] = '\0';
}

char			**nbr_char(char const *s, char c, char **str)
{
	unsigned int	nbrc;
	unsigned int	a;
	unsigned int	i;
	unsigned int	nbrms;

	nbrms = nbr_mots(s, c);
	a = 0;
	i = 0;
	while (i < nbrms)
	{
		while (s[a] == c && s[a] != '\0')
			a++;
		nbrc = 0;
		while (s[a + nbrc] != c && s[a + nbrc] != '\0')
			nbrc++;
		if (!(str[i] = malloc((nbrc + 1) * sizeof(char))))
			return (NULL);
		copy(s + a, c, str[i]);
		i++;
		a += nbrc;
	}
	str[i] = NULL;
	return (str);
}

char			**ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	j;

	j = 0;
	if (s == 0)
		return (0);
	str = malloc(sizeof(char *) * (nbr_mots(s, c) + 1));
	if (!str)
		return (NULL);
	nbr_char(s, c, str);
	return (str);
}
