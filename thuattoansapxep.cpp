#include <iostream>

using namespace std;

void SelectionSort(int a[], int n);
void hoanVi ( int i, int j);
void quickSort (int a[], int left, int right);
void hoanVi (int i, int j);

int main () {
	int n = 10;
	int a[10];
	for (int i = 0; i < n; i ++) {
		cout << "a[" << i << "]= " ;
		cin >> a[i];
	}
	
	cout << "Mang sau sap xep: ";
	SelectionSort(a, n);
//	for (int i = 0; i < n; i ++) {
//		cout << " " << a[i];
//	}
	
	
	return 0;
}

void hoanVi(int i, int j) {
	int temp = i;
	i = j;
	j = temp;
}

void SelectionSort(int a[], int n) {
	for (int i = 0; i < n - 1; i ++) {
		int min = i;
		for (int j = i +1; j < n; j ++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		hoanVi(i, min);
	}
	for (int i = 0; i < n; i ++) {
		cout << a[i] << " ";
	}
}
//void quickSort (int a[], int left, int right)
//{
//	int mid = (left + right) / 2;
//	int i = left;
//	int j = right;
//	while (i < j)
//	{
//		while (a[i] < a[j])
//			i++;
//		while (a[j]> a[mid])
//			j++;
//		if (i <= j)
//		{
//			hoanVi(a[i], a[j]);
//			i++;
//			j++;
//		}
//	}
//	if (i < right)
//		quickSort(a, i, right);
//	if (j < left)
//		quickSort(a, left, j);
//}
