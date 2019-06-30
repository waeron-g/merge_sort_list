/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waeron-g <waeron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:37:10 by waeron-g          #+#    #+#             */
/*   Updated: 2018/11/30 16:00:41 by waeron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		k;
	size_t	i;

	i = 0;
	k = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[k + i] = s2[i];
		i++;
	}
	s1[k + i] = '\0';
	return (s1);
}