/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:48:06 by femontei          #+#    #+#             */
/*   Updated: 2025/04/16 16:29:32 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	cc;

	i = 0;
	cc = c;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)(s + i));
		i++;
	}
	if (cc == '\0')
		return ((char *)(s + i));
	return (NULL);
}

/*int	main(void)
{
	char	src[10] = "pudimi";
	char	c = 'i';
	char	p = 'h';
	char	l = '\0';

	printf("%s\n", strchr(src, c));
	printf("%s\n", strchr(src, p));
	printf("%s\n", strchr(src, l));
	printf("%s\n", strchr(src, 't' + 256));
	printf("%s\n", ft_strchr(src, c));
	printf("%s\n", ft_strchr(src, p));
	printf("%s\n", ft_strchr(src, l));
	printf("%s", ft_strchr(src, 't' + 256));
	return(0);
}*/
