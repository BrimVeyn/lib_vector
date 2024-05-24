/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvan-pae <bryan.vanpaemel@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:19:59 by bvan-pae          #+#    #+#             */
/*   Updated: 2024/05/24 17:24:42 by bvan-pae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Vector/vector_define.h"

static size_t vector_binary_search(Vector *vect, void *value) {
	if (vect->size == 0) return 0;
	int L = 0;
	int R = vect->size;
	int m;

	while (L <= R) {
		m = ((L + R) / 2);
		if (vect->funcs.cmp(vect->data[m], value) < 0)
			L = m + 1;
		else if (vect->funcs.cmp(vect->data[m], value) > 0)
			R = m - 1;
		else
			return m;
	}
	return vect->size;
}

Iterator vector_find(Vector *vect, void *value) {
	for (size_t i = 0; i < vect->size; i++) {
		if (vect->funcs.cmp(vect->data[i], value) == 0)
			return (Iterator) {vect, i};
	}
	return (Iterator) {vect, vect->size};
}

Iterator vector_find_sorted(Vector *vect, void *value) {
	size_t index = vector_binary_search(vect, value);
	return (Iterator) {vect, index};
}
