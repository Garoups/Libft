/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:31:30 by femontei          #+#    #+#             */
/*   Updated: 2025/04/16 17:30:47 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_istrim(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
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
	char	*dest;

	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_istrim(s1[start], set))
		start++;
	while (end >= start && ft_istrim(s1[end], set))
		end--;
	dest = malloc(sizeof(char) * (end - start + 2));
	if (!dest)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		dest[i] = s1[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
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
