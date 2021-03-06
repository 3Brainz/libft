/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppunzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:51:32 by ppunzo            #+#    #+#             */
/*   Updated: 2021/01/13 17:51:36 by ppunzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;

	index = 0;
	if (!(s1[index] && s2[index]))
		return (ft_memcmp(&s1[index], &s2[index], 1));
	while (s1[index + 1] && s2[index + 1] && index < n)
		index++;
	return (ft_memcmp(&s1[index], &s2[index], 1));
}
