/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvan-pae <bryan.vanpaemel@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:23:41 by bvan-pae          #+#    #+#             */
/*   Updated: 2024/05/23 17:24:04 by bvan-pae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/struct.h"
#include "include/Vector/vector_define.h"
#include "include/Iterator/iterator_define.h"

int main(void) {

	Vector int_vect = vector_construct_size(40, INT_TYPE);

	vector_push_back(&int_vect, INT_L(12));
	vector_push_back(&int_vect, INT_L(12));
	vector_push_back(&int_vect, INT_L(12));
	vector_push_back(&int_vect, INT_L(15));
	vector_push_back(&int_vect, INT_L(12));
	vector_push_back(&int_vect, INT_L(12));

	vector_print(&int_vect);

	printf("size = %zu\n", vector_get_size(&int_vect));
	printf("capacity = %zu\n", vector_get_capacity(&int_vect));

	Iterator it = vector_find(&int_vect, INT_L(15));

	it_add(&it, INT_L(100));
	// vector_clear(&int_vect);
	// vector_print(&int_vect);

	printf("begin = %zu, end = %zu\n", it_begin(&int_vect).index, it_end(&int_vect).index);

	printf("###########################\n");
	for (; IT_NEQ(it, it_end(&int_vect));) {
		it = vector_find(&int_vect, INT_L(12));
		it_erase(&it);
	}
	printf("###########################\n");

	vector_print(&int_vect);
	vector_destruct(&int_vect);
}

// int main(void) {
//
// 	Vector int_vect = vector_construct();
// 	int tab[4] = { 1, 2, 3, 4 };
//
// 	vector_push_back(&int_vect, &tab[0], int_dup);
// 	vector_push_back(&int_vect, &tab[1], int_dup);
//
// 	vector_print(&int_vect, int_print);
//
// 	Vector str_vect = vector_construct();
// 	char *str_tab[5] = { "wonder", "happens", "sometimes", "inthisworld" };
//
// 	vector_push_back(&str_vect, str_tab[0], str_dup);
// 	vector_push_back(&str_vect, str_tab[1], str_dup);
// 	vector_push_back(&str_vect, str_tab[2], str_dup);
// 	vector_push_back(&str_vect, str_tab[3], str_dup);
//
// 	vector_print(&str_vect, str_print);
//
// 	for (size_t i = 0; i < vector_get_size(&str_vect); i++) {
// 		char *value = vector_at(&str_vect, i);
// 		printf("test_at[%zu] = %s\n", i, value);
// 	}
//
// 	vector_pop_back(&str_vect);
//
// 	char *test __attribute__((unused)) = vector_at(&str_vect, 12);
//
// 	char *test_front = vector_front(&str_vect);
// 	char *test_back = vector_back(&str_vect);
//
// 	printf("Vector_front = %s\n", test_front);
// 	printf("Vector_back = %s\n", test_back);
//
// 	Vector empty_vect = vector_construct();
//
// 	char *test_empty __attribute__((unused)) = vector_front(&empty_vect);
// 	char *test2_empty __attribute__((unused)) = vector_back(&empty_vect);
//
//
// 	printf("-----------------\n");
// 	vector_print(&str_vect, str_print);
// 	printf("-----------------\n");
// 	vector_erase_index(&str_vect, 0);
// 	vector_erase_index(&str_vect, 0);
// 	vector_erase_index(&str_vect, 0);
// 	vector_erase_index(&str_vect, 0);
// 	vector_erase_index(&str_vect, 0);
// 	printf("-----------------\n");
// 	vector_print(&str_vect, str_print);
// 	printf("-----------------\n");
//
// 	vector_destruct(&int_vect);
// 	vector_destruct(&str_vect);
// 	vector_destruct(&empty_vect);
// }
