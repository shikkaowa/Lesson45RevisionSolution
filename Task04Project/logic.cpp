// Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая меняет экстремальные элементы 
// вектора местами. Если экстремальных элементов несколько, 
// то необходимо поменять первые найденные элементы.
#include "logic.h"
void swap_extrem_elements(int array[DEFAULT_SIZE], int size) {
	if (size < 2) return;

	int minVal = array[0];
	int maxVal = array[0];
	int minIndx = 0;
	int maxIndx = 0;

	for (int i = 0; i < size; ++i) {
		if (array[i] < array[minIndx]) {
			minVal = array[i];
			minIndx = i;
		}

		if (array[i] > array[maxIndx]) {
			maxVal = array[i];
			maxIndx = i;
		}
	}

	int temp = array[minIndx];
	array[minIndx] = array[maxIndx];
	array[maxIndx] = temp;


}