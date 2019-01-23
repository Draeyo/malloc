/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 10:56:43 by vlistrat          #+#    #+#             */
/*   Updated: 2017/04/14 10:56:43 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_tablen(char **tab)
{
	size_t		len;

	len = 0;
	if (tab)
	{
		while (*tab)
		{
			++tab;
			++len;
		}
	}
	return (len);
}