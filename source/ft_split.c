/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:48:59 by femontei          #+#    #+#             */
/*   Updated: 2025/04/16 16:09:15 by femontei         ###   ########.fr       */
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

int	ft_count(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

char	*ft_fill(int start, const char *s, int len)
{
	char	*str;
	int		i;

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
	int		j;
	int		i;
	char	**split;
	int		start;

	split = ft_calloc(sizeof(char *), (ft_count(s, c) + 1));
	if (split == NULL)
		return (NULL);
	j = -1;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
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
