#include "logic.h"
// Task 01 [The count of non - zero values]
// Количество ненулевых значений
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая подсчитывает количество ненулевых
// значений элементов вектора.

int count_nonzero_elements(int array[DEFAULT_SIZE], int size) {
	if (size <= 0) return -1;

	int count = 0;
	for (int index = 0; index < size; index++) {
		if (array[index] != 0) {
			count++;
		}
	}
	return count;
}