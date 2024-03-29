/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waeron-g <waeron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 21:06:19 by waeron-g          #+#    #+#             */
/*   Updated: 2018/12/01 16:14:28 by waeron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (*s1 && *s2 && i < n)
	{
		if (*s1 - *s2 != 0)
			return (0);
		s1++;
		s2++;
		i++;
	}
	return (((*s1 == 0 && *s2 == 0) || i == n) ? 1 : 0);
}
