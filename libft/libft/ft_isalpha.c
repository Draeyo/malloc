/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 10:54:18 by vlistrat          #+#    #+#             */
/*   Updated: 2017/04/14 10:54:18 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	if (c >= 0 && c <= 127)
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	return (0);
}