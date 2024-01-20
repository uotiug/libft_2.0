/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <guill@umebrunet.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:36:35 by gbrunet           #+#    #+#             */
/*   Updated: 2024/01/20 21:44:02 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_free(int return_val, char *str, ...)
{
	va_list	ap;
	void	*ptr;
	char	**split;
	int		i;
	int		j;

	va_start(ap, str);
	i = -1;
	while (str[++i])
	{
		if (str[i] == 'v')
		{
			ptr = va_arg(ap, void *);
			free(ptr);
		}
		else if (styr[i] == 's')
		{
			split = va_arg(ap, char **);
			j = -1;
			while (split[++i])
				free (split[i]);
			free (split);
		}
	}
	return (return_value);
}
