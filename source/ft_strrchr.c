/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:30:51 by femontei          #+#    #+#             */
/*   Updated: 2025/04/16 16:33:44 by femontei         ###   ########.fr       */
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
