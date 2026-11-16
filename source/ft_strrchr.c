/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermonte <fermonte@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:14:36 by fermonte          #+#    #+#             */
/*   Updated: 2026/11/03 13:19:37 by fermonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	cc;

	i = 0;
	cc = c;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == cc)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	char	src[10] = "pudimi";
	char	c = 'i';
	char	p = 'h';
	char	l = '\0';

	printf("%s\n", strrchr(src, c));
	printf("%s\n", strrchr(src, p));
	printf("%s\n", strrchr(src, l));
	printf("%s\n", strrchr(src, 't' + 256));
	printf("%s\n", ft_strrchr(src, c));
	printf("%s\n", ft_strrchr(src, p));
	printf("%s\n", ft_strrchr(src, l));
	printf("%s", ft_strrchr(src, 't' + 256));
	return(0);
}*/
