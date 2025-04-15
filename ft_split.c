/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:16:47 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/15 14:48:47 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	counter;
	size_t	i;

	counter = 0;
	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (i > 0 && s[i] == c && s[i - 1] != c)
			counter++;
		i++;
	}
	if (i > 0 && s[i - 1] != c)
		counter++;
	return (counter);
}

static char	**free_arr(char **arr, size_t position)
{
	size_t	i;

	i = 0;
	while (i < position)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}

static char	*process_word(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	word = malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_bzero(word, (i + 1) * sizeof(char));
	i = 0;
	while (*s != c && *s)
	{
		word[i] = *s;
		s++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	size_t	i;
	char	**arr;

	word_count = count_words(s, c);
	arr = malloc((word_count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	ft_bzero(arr, (word_count + 1) * sizeof(char *));
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		arr[i] = process_word(s, c);
		if (!arr[i])
			return (free_arr(arr, i));
		i++;
		while (*s && *s != c)
			s++;
	}
	if (arr[0] != NULL)
		arr[word_count] = NULL;
	return (arr);
}
/*
int	main(void)
{
	int		i;
	char	*s;
	char	c;
	char	**arr;
	
	s = "hello my friend!";
	c = ' ';
	printf("str: %s\n", s);
	printf("word count: %zu\n", count_words(s, c));
	arr = ft_split(s, c);
	i = 0;
	while (arr[i])
	{
		printf("p[%d] = %s\n", i, arr[i]);
		i++;
	}
	printf("p[%d] = %s\n", i, arr[i]);
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}
 */
