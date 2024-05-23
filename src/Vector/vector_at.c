/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_at.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvan-pae <bryan.vanpaemel@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:36:29 by bvan-pae          #+#    #+#             */
/*   Updated: 2024/05/23 15:17:28 by bvan-pae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Vector/vector_define.h"

void *vector_at(Vector *vect, size_t index) {
	if ((index) >= vect->size || (index) < 0) return out_of_range(), NULL;
	
	return vect->data[index];
}
