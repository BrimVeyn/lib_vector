/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_define.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvan-pae <bryan.vanpaemel@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:24:36 by bvan-pae          #+#    #+#             */
/*   Updated: 2024/05/23 16:22:59 by bvan-pae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../struct.h"

/** ###########################################################
*						Utility Functions					  #
* ###########################################################*/

void *str_dup(const void* value);
void str_print(size_t index, const void *value);
void str_plus(void **ptr1, void *ptr2);
bool str_cmp(void *s1, void *s2);

void *int_dup(const void *value);
void int_print(size_t index, const void *value);
void int_plus(void **ptr1, void *ptr2);
bool int_cmp(void *n1, void *n2);

/** ###########################################################
*						Error Functions						  #
* ###########################################################*/

void	out_of_range( void );
void	is_empty( void );

void vector_push_back(Vector *vect, void *value);
void vector_add(Vector *vect, size_t index, void *to_add);
void vector_print(Vector *vect);

Vector vector_construct(struct s_util_fun func);
Vector vector_construct_size(size_t size, struct s_util_fun func);

size_t vector_get_size(Vector *vect);
size_t vector_get_capacity(Vector *vect);

void	vector_clear(Vector *vect);
void	vector_destruct(Vector *vect);
void	*vector_at(Vector *vect, size_t index);
void	*vector_front(Vector *vect);
void	*vector_back(Vector *vect);
void	vector_pop_back(Vector *vect);
void	vector_erase_index(Vector *vect, size_t index);
Iterator vector_find(Vector *vect, void *value);

