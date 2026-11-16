/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermonte <fermonte@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 18:24:15 by fermonte          #+#    #+#             */
/*   Updated: 2026/11/06 16:43:39 by fermonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_digits(int n)
{
	int	digits;

	if (n <= 0)
		digits = 1;
	else
		digits = 0;
	while (n)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*str;
	long	nb;

	digits = ft_digits(n);
	str = malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
		return (NULL);
	str[digits] = '\0';
	nb = n;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--digits] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

/*int	main(void)
{
	char	*num;

	num = ft_itoa(-150);
	printf("%s", num);
	free(num);
	return (0);
}*/
