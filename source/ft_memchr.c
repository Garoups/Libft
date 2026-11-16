/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermonte <fermonte@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:47:07 by fermonte          #+#    #+#             */
/*   Updated: 2026/11/03 15:00:34 by fermonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)((unsigned char *)s + i));
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	src[10] = "pudimi";
	char	c = 'i';
	char	p = 'h';
	char	l = '\0';

	printf("%p\n", memchr(src, c, 6));
	printf("%p\n", memchr(src, p, 6));
	printf("%p\n", memchr(src, l, 7));
	printf("%p\n", ft_memchr(src, c, 6));
	printf("%p\n", ft_memchr(src, p, 6));
	printf("%p\n", ft_memchr(src, l, 7));
	return(0);
}*/
