/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermonte <fermonte@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:36:05 by fermonte          #+#    #+#             */
/*   Updated: 2026/11/03 18:42:40 by fermonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	int		len_s1;
	int		len_s2;
	int		len_total;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len_total = len_s1 + len_s2 + 1;
	arr = malloc(sizeof(char) * len_total);
	if (arr == NULL)
		return (NULL);
	ft_strlcpy(arr, s1, len_s1 + 1);
	ft_strlcat(arr, s2, len_total);
	return (arr);
}

/*int	main(void)
{
	char	*s1 = "abcde";
	char	*s2 = "fghij";
	char	*arr;

	arr = ft_strjoin(s1, s2);
	printf("%s", arr);
	free(arr);
	return (0);
}*/
