/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppunzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:11:33 by ppunzo            #+#    #+#             */
/*   Updated: 2021/01/13 12:11:35 by ppunzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	t_uc *vect1;
	t_uc *vect2;
	size_t index;

	vect1 = (t_uc*)s1;
	vect2 = (t_uc*)s2;
	index = 0;
	while (index < n && vect2[index] == vect1[index])
	{
		index++;
	}
	return((int)vect1[index] - (int)vect2[index]);
}
