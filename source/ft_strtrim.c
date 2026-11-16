/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermonte <fermonte@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:50:58 by fermonte          #+#    #+#             */
/*   Updated: 2026/11/03 18:39:50 by fermonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	is_trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_trim(s1[start], set))
		start++;
	while (end >= start && is_trim(s1[end], set))
		end--;
	str = malloc(sizeof(char) * (end - start + 2));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*s1 = "@##@__Eu ###@@_#@gosto de @@@###__pudim___#@__";
	char	*set = "@#_";
	char	*arr;

	arr = ft_strtrim(s1, set);
	printf("%s", arr);
	free(arr);
	return (0);
}*/
