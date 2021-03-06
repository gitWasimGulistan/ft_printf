/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:55:01 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/11 17:54:45 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putendl(const char *s)
{
	if (!s)
		ft_putchar('\n');
	else
	{
		ft_putstr(s);
		ft_putchar('\n');
	}
}
