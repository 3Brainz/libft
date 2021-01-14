/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppunzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:33:56 by ppunzo            #+#    #+#             */
/*   Updated: 2021/01/13 12:33:57 by ppunzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t return_value;

	if (ft_strlen(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	return_value = ft_strlen(dst) + ft_strlen(src);
	ft_memccpy(&dst[ft_strlen(dst)], src, '\0', dstsize);
	if (dstsize > 0)
		dst[dstsize - 1] = '\0';
	return (return_value);
}
