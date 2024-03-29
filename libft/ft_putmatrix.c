/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmatrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquaro <yquaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:20:03 by yquaro            #+#    #+#             */
/*   Updated: 2019/04/07 20:37:34 by yquaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmatrix(char **str)
{
	int i;

	i = 0;
	while (str[i] != NULL)
	{
		ft_putendl(str[i]);
		i++;
	}
}
