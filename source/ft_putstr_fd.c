/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:33:43 by femontei          #+#    #+#             */
/*   Updated: 2025/04/16 13:39:38 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*int	main(void)
{
	int	fd;

	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putstr_fd("42bortocode", fd);
	close(fd);
	return (0);
}*/
