/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermonte <fermonte@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:40:09 by fermonte          #+#    #+#             */
/*   Updated: 2026/11/03 15:50:53 by fermonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*arr;

	if (size && nmemb && nmemb > SIZE_MAX / size)
		return (NULL);
	total = nmemb * size;
	arr = malloc(total);
	if (arr == NULL)
		return (NULL);
	ft_memset(arr, 0, total);
	return (arr);
}
