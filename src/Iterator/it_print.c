/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   it_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvan-pae <bryan.vanpaemel@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:25:56 by bvan-pae          #+#    #+#             */
/*   Updated: 2024/05/23 15:26:06 by bvan-pae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Iterator/iterator_define.h"

void	it_print(Iterator *it) {
	it->vector->funcs.print(it->index, it->vector->data[it->index]);
}
