/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:29:02 by femontei          #+#    #+#             */
/*   Updated: 2025/04/11 15:56:52 by femontei         ###   ########.fr       */
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
