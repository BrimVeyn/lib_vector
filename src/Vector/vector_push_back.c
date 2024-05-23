/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvan-pae <bryan.vanpaemel@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:54:20 by bvan-pae          #+#    #+#             */
/*   Updated: 2024/05/23 15:17:28 by bvan-pae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Vector/vector_define.h"

void vector_push_back(Vector *vect, void *value) {
    if (vect->size == vect->capacity) {
        vect->capacity *= 2;
        vect->data = realloc(vect->data, vect->capacity * sizeof(void *));
    }
    vect->data[vect->size] = vect->funcs.duplicate(value);
    vect->size++;
}
