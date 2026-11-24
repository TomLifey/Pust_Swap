/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabutair <mabutair@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 19:03:22 by mabutair          #+#    #+#             */
/*   Updated: 2026/11/24 19:03:25 by mabutair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	init_stack(&a);
	init_stack(&b);
	// Next step: parse argv, validate numbers, and call stack_add_bottom(&a, new_node(num))
	free_stack(&a);
	free_stack(&b);
	return (0);
}
