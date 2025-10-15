/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_multi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:54:22 by lseabra-          #+#    #+#             */
/*   Updated: 2025/10/15 17:26:43 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * count_words - Count the number of words in a string separated by any of 
 *               the characters in `seps`.
 * @param s: The input string.
 * @param seps: A string containing all delimiter characters.
 * 
 * Returns:
 * The number of words in `s` separated by any character in `seps`.
 */
static size_t	count_words(char const *s, char *seps)
{
	size_t	counter;
	size_t	i;

	counter = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i] && ft_strchr(seps, s[i]))
		i++;
	while (s[i])
	{
		if (i > 0 && ft_strchr(seps, s[i]) && !ft_strchr(seps, s[i - 1]))
			counter++;
		i++;
	}
	if (i > 0 && !ft_strchr(seps, s[i - 1]))
		counter++;
	return (counter);
}

/**
 * free_arr - Frees a partially allocated array of strings.
 * @param arr: The array of strings to free.
 * @param position: The number of elements to free in the array.
 * 
 * Returns:
 * NULL after freeing the allocated memory.
 */
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

/**
 * process_word - Extract a single word from a string until a delimiter is 
 *                reached or the string ends.
 * @param s: The input string.
 * @param seps: A string containing all delimiter characters.
 * 
 * Returns:
 * A newly allocated string containing the word. Returns NULL if memory 
 * allocation fails.
 */
static char	*process_word(char const *s, char *seps)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && !ft_strchr(seps, s[i]))
		i++;
	word = malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_bzero(word, (i + 1) * sizeof(char));
	i = 0;
	while (*s && !ft_strchr(seps, *s))
	{
		word[i] = *s;
		s++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

/**
 * ft_split_multi - Split a string into words based on multiple delimiters.
 * @param s: The input string to split.
 * @param seps: A string containing all delimiter characters.
 * 
 * Returns:
 * A NULL-terminated array of strings obtained by splitting `s` using the 
 * delimiters in `seps`. Returns NULL if memory allocation fails.
 */
char	**ft_split_multi(char const *s, char *seps)
{
	size_t	word_count;
	size_t	i;
	char	**arr;

	word_count = count_words(s, seps);
	arr = malloc((word_count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	ft_bzero(arr, (word_count + 1) * sizeof(char *));
	i = 0;
	while (i < word_count)
	{
		while (ft_strchr(seps, *s))
			s++;
		arr[i] = process_word(s, seps);
		if (!arr[i])
			return (free_arr(arr, i));
		i++;
		while (*s && !ft_strchr(seps, *s))
			s++;
	}
	if (arr[0] != NULL)
		arr[word_count] = NULL;
	return (arr);
}
