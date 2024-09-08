#include <stdio.h>

//int binarySearch(int arr[], int size, int x) {
//	int left = 0, right = size - 1;
//	
//	while (left <= right) {
//		int mid = left + (right - left) / 2;
//		if (arr[mid] == x) {
//			return mid;
//		}
//		
//		if (arr[mid] > x) {
//			right = mid - 1;
//		} else {
//			left = mid + 1;
//		}
//	}
//	
//	return -1;
//}

int binarySearch (int arr[], int left, int right, int x) {
	if (left <= right) {
		int mid = left + (right - left) / 2;
		
		if (arr[mid] == x) {
			return mid;
		}
		
		if (arr[mid] > x) {
			return binarySearch(arr, left, mid - 1, x);
		}
		
		return binarySearch(arr, mid + 1, right, x);
	}
	return -1;
}

int main () {
	int n = 10;
	int arr[] = {2, 4, 6, 8, 10};
	int x = 8;
//	int result = binarySearch (arr, n, x); // khong co de quy

	int result = binarySearch (arr, 0, n - 1, x); // co de quy
	if (result == -1) {
		printf("Phan tu khong co trong mang\n");
	} else {
		printf("Phan tu duoc tim thay o trong mang\n");
	}
	

	
	
	return 0;
}
