/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermonte <fermonte@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:11:14 by fermonte          #+#    #+#             */
/*   Updated: 2026/11/06 16:36:16 by fermonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**ft_free(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	*ft_fill(int start, char const *s, int len)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**split;

	split = ft_calloc(sizeof(char *), (ft_count(s, c) + 1));
	if (split == NULL)
		return (NULL);
	j = -1;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		split[++j] = ft_fill(start, s, i - start);
		if (split[j] == NULL)
			return (ft_free(split));
	}
	return (split);
}

/*int	main(void)
{
	char	*str = "Eu gosto de pudim.";
	char	c = ' ';
	char	**arr;
	int		i;

	int	n = ft_count(str, c);
	printf("words: %d\n", n);
	arr = ft_split(str, c);
	i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	ft_free(arr);
	return (0);
}*/
