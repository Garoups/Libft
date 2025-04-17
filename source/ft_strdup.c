/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:28:52 by femontei          #+#    #+#             */
/*   Updated: 2025/04/08 18:10:56 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(src) + 1;
	copy = (char *)malloc(sizeof(char) * len);
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, src, len);
	return (copy);
}

/*int	main(void)
{
	char src[] = "eu gosto de pudim";
	char *copy;
	copy = ft_strdup(src);
	printf("%s", copy);
	free (copy);
	return (0);
}*/
