/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 19:58:16 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/17 20:02:26 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int	i;

	if (!ptr)
		return (write(1, "(null)", 6));
	i = 0;
	i = i + write(1, "0x", 2);
	i = i + ft_puthex((unsigned long)ptr, 0);
	return (i);
}
