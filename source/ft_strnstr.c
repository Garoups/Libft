/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:55:20 by femontei          #+#    #+#             */
/*   Updated: 2025/04/09 20:08:10 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	int		j;

	if (small[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && (big[i + j] == small[j]))
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
