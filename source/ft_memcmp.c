/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:02:54 by femontei          #+#    #+#             */
/*   Updated: 2025/04/16 16:49:36 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char s1[] = "Pudim";
	char s2[] = "Pudi";
	char s3[] = {0, 0, 127, 0};
	char s4[] = {0, 0, 42, 0};
	char s5[] = {-128, 0, 127, 0};

	printf("%d\n", memcmp(s1, s2, 5));
	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d\n", memcmp(s3, s4, 3));
	printf("%d\n", ft_memcmp(s3, s4, 3));
	printf("%d\n", memcmp(s3, s5, 4));
	printf("%d\n", ft_memcmp(s3, s5, 4));
	return (0);
}*/
