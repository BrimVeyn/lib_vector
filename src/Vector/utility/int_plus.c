/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_plus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvan-pae <bryan.vanpaemel@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:28:24 by bvan-pae          #+#    #+#             */
/*   Updated: 2024/05/23 15:17:08 by bvan-pae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/Vector/vector_define.h"

void int_plus(void **ptr1, void *ptr2) {
	*(int *) *ptr1 += *(int *) ptr2;
}
