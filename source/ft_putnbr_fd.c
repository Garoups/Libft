/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:58:46 by femontei          #+#    #+#             */
/*   Updated: 2025/04/16 14:07:01 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	p;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		p = nb + '0';
		ft_putchar_fd(p, fd);
	}
}

/*int	main(void)
{
	int	fd;

	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putnbr_fd(-368298, fd);
	close(fd);
	return (0);
}*/
