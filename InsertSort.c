#include <stdio.h>


void PrintArray(int* array, int size) {
	for (int i = 0; i < size; ++i) {
		printf("%d ", array[i]);
	}
	printf("\n");
}
 
void InsertSort(int* array, int size) {
	for (int i = 1; i < size; ++i) {
		int key = array[i];
		int end = i - 1;
		while (end >= 0 && array[end] > key) {
			array[end + 1] = array[end];
			end--;
		}
		array[end + 1] = key;
	}
}

int main() {
	int array[] = { 3,2,6,9,4,5,1,8,7 };
	PrintArray(array, sizeof(array) / sizeof(array[0]));
	InsertSort(array, sizeof(array) / sizeof(array[0]));
	PrintArray(array, sizeof(array) / sizeof(array[0]));
	return 0;
}