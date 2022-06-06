#include <stdio.h>
#include "function.h"

int main1() {

	int arr[10] = { 4,5,3,2,6,7,1,8,9,10 };

	BubbleSort(arr, sizeof(arr) / sizeof(int));
	printArray(arr, sizeof(arr) / sizeof(int));
}

//printArray(arr, sizeof(arr) / sizeof(int));  sizeof(arr) 은 40이 나오고 자료형sizeof(int) 공강 4를 나누면 배열의 size()를 구함
//printf("값 %d", sizeof(int)); 4가 나온다? int의 공간이 4인가?

int main() {

	main1();
}
