/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:47:26 by aait-mal          #+#    #+#             */
/*   Updated: 2022/11/11 14:37:46 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	main(void)
{
	ft_printf("%d\n", ft_printf("%p\n", ""));
	ft_printf("%d\n", printf("%p\n", ""));
	return (0);
}