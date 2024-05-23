/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvan-pae <bryan.vanpaemel@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:42:12 by bvan-pae          #+#    #+#             */
/*   Updated: 2024/05/23 16:40:35 by bvan-pae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Vector/vector_define.h"

void vector_print(Vector *vect) {
	if (!vect->size && SILENT == 0) return is_empty();
	for (size_t i = 0; i < vect->size; i++) {
		vect->funcs.print(i, vect->data[i]);
	}
}
