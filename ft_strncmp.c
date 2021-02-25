/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lirobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 13:29:38 by lirobert          #+#    #+#             */
/*   Updated: 2021/01/31 11:50:31 by lirobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t					i;
	const unsigned char		*ss1;
	const unsigned char		*ss2;

	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((ss1[i] == ss2[i]) && ss1[i] && ss2[i] && (i < n - 1))
		i++;
	if ((ss1[i] - ss2[i]) > 0)
		return (1);
	if ((ss1[i] - ss2[i]) < 0)
		return (-1);
	else
		return (ss1[i] - ss2[i]);
}
