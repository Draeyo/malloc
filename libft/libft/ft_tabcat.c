/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 10:56:37 by vlistrat          #+#    #+#             */
/*   Updated: 2017/04/14 10:56:37 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_tabcat(char **tab, char *str)
{
	char	**tmp;
	size_t	len;

	tmp = NULL;
	if (tab && *tab && str)
	{
		len = ft_tablen(tab);
		if ((tmp = ft_tabnew(len + 2)) == NULL)
			return (NULL);
		if ((tmp = ft_tabcpy(tmp, tab)) == NULL)
			return (NULL);
		if ((tmp[len] = ft_strdup(str)) == NULL)
			return (NULL);
		tmp[len + 1] = NULL;
	}
	else if (str)
	{
		if ((tmp = ft_tabnew(2)) == NULL)
			return (NULL);
		if ((tmp[0] = ft_strdup(str)) == NULL)
			return (NULL);
		tmp[1] = NULL;
	}
	return (tmp);
}
