/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermonte <fermonte@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:05:43 by fermonte          #+#    #+#             */
/*   Updated: 2026/11/03 15:18:57 by fermonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	if (small[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && big[i + j] == small[j])
		{
			j++;
			if (small[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("%s\n", ft_strnstr("hello, world", "world", 8));
	printf("%s\n", ft_strnstr("hello, world", "haha", 5));
	printf("%s\n", ft_strnstr(" ", " ", 1));
	printf("%s\n", ft_strnstr("hello, world", "", 10));
	printf("%s\n", ft_strnstr("", "world", 1));
	return (0);
}*/
