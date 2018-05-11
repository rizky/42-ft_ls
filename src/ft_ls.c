/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <rnugroho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 02:23:58 by rnugroho          #+#    #+#             */
/*   Updated: 2018/05/11 04:04:29 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int
	main(int argc, char **argv)
{
	int c;

	while ((c = ft_getopt(argc, argv, "lRart")) != -1)
		ft_printf("option %c %s\n", c, g_optarg ? g_optarg : "(none)");
	c = g_optind;
	while (c < argc)
	{
		ft_printf("non-opt: %s\n", argv[c]);
		c++;
	}
	return (0);
}
