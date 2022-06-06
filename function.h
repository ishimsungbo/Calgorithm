void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		printf(" %d ", arr[i]);
		printf("\n");
}

int more(int value1, int value2)
{
	return value1 > value2;
}

void BubbleSort(int arr[], int size) {

	//printf("size %d", size);
	//printf("\n");

	int i, j, temp;

	for (i = 0; i < size - 1; i++) {

		for (j = 0; j < size - i - 1; j++) {

			if (more(arr[j], arr[j + 1])) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}

	}

}