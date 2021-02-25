/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lirobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 13:53:47 by lirobert          #+#    #+#             */
/*   Updated: 2021/02/09 11:19:13 by lirobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len_n(int n, long int a, long int i)
{
	a = n;
	if (a < 0)
		a = -a;
	while (a >= 10)
	{
		a /= 10;
		i++;
	}
	if (n < 0)
		i++;
	return (i);
}

static char		*strk(char *str, long int j, long int k)
{
	if (j == 9)
		str[k] = 57;
	else if (j == 8)
		str[k] = 56;
	else if (j == 7)
		str[k] = 55;
	else if (j == 6)
		str[k] = 54;
	else if (j == 5)
		str[k] = 53;
	else if (j == 4)
		str[k] = 52;
	else if (j == 3)
		str[k] = 51;
	else if (j == 2)
		str[k] = 50;
	else if (j == 1)
		str[k] = 49;
	else if (j == 0)
		str[k] = 48;
	return (str);
}

static char		*inf_dix(char *str, long int k, long int a)
{
	if (a == 9)
		str[k] = 57;
	else if (a == 8)
		str[k] = 56;
	else if (a == 7)
		str[k] = 55;
	else if (a == 6)
		str[k] = 54;
	else if (a == 5)
		str[k] = 53;
	else if (a == 4)
		str[k] = 52;
	else if (a == 3)
		str[k] = 51;
	else if (a == 2)
		str[k] = 50;
	else if (a == 1)
		str[k] = 49;
	else if (a == 0)
		str[k] = 48;
	return (str);
}

static char		*sup_dix(char *str, long int i, long int k, long int a)
{
	long int	j;

	j = 0;
	if (a < 0)
		a = -a;
	while (a >= 10)
	{
		i = a % 10;
		while (i > 0)
		{
			i--;
			j++;
		}
		strk(str, j, k);
		j = 0;
		k--;
		a /= 10;
	}
	if (a < 10)
		inf_dix(str, k, a);
	return (str);
}

char			*ft_itoa(int n)
{
	long int		i;
	long int		j;
	long int		k;
	long int		a;
	char			*str;

	i = 1;
	j = 0;
	k = 0;
	a = 0;
	str = malloc(sizeof(char) * ((len_n(n, a, i)) + 1));
	if (str == NULL)
		return (NULL);
	k = len_n(n, a, i);
	str[k] = '\0';
	k--;
	a = n;
	sup_dix(str, i, k, a);
	if (n < 0)
	{
		k = 0;
		str[k] = '-';
	}
	return (str);
}
