#include <stdio.h>
#include "function.h"

int main1() {

	int arr[10] = { 4,5,3,2,6,7,1,8,9,10 };

	BubbleSort(arr, sizeof(arr) / sizeof(int));
	printArray(arr, sizeof(arr) / sizeof(int));
}

//printArray(arr, sizeof(arr) / sizeof(int));  sizeof(arr) �� 40�� ������ �ڷ���sizeof(int) ���� 4�� ������ �迭�� size()�� ����
//printf("�� %d", sizeof(int)); 4�� ���´�? int�� ������ 4�ΰ�?

int main() {

	main1();
}
