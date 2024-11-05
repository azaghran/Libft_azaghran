/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghran <azaghran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:09:58 by azaghran          #+#    #+#             */
/*   Updated: 2024/11/05 10:09:58 by azaghran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*get_word(char const *s, char c, size_t *start)
{
	size_t	i;
	size_t	len;
	char	*word;

	while (s[*start] && s[*start] == c)
		(*start)++;
	i = *start;
	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
		word[i++] = s[(*start)++];
	word[i] = '\0';
	return (word);
}

static void	free_split(char **split, size_t word_count)
{
	size_t	i;

	i = 0;
	while (i < word_count)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	word_count;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	i = 0;
	start = 0;
	while (i < word_count)
	{
		split[i] = get_word(s, c, &start);
		if (!split[i])
		{
			free_split(split, i);
			return (NULL);
		}
		i++;
	}
	split[i] = NULL;
	return (split);
}
