/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppunzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:33:33 by ppunzo            #+#    #+#             */
/*   Updated: 2021/01/15 16:33:35 by ppunzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_next_word(char *string, size_t from, char separator)
{
	while (string[from] != separator && string[from])
		from++;
	while (string[from] == separator)
		from++;
	return (from);
}

static size_t	ft_count_words(char *string, char separator)
{
	size_t words_c;
	size_t from;

	from = 0;
	words_c = 0;
	if (string[0] != separator)
		words_c++;
	while (ft_next_word(string, from, separator) < strlen(string))
	{
		from = ft_next_word(string, from, separator);
		words_c++;
	}
	return words_c;
}


char			**ft_split(char const *s, char c)
{
	char **matrix;

	if (!s)
		return (0);

}
/*
int main(int argc, char const *argv[])
{
	printf("%i\n", ft_count_words("polpette a con a l a bresolad", 'a'));
	return 0;
}
*/
