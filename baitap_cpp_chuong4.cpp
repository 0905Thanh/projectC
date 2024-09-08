#include <iostream>

using namespace std;
int main ()
{
//	bai_tap_1
//	int n;
//	int numbers[10];
//	
//	cout << "n = ";
//	cin >> n;
//	cout << "Nhap mang: ";
//	for (int i = 0;i < n; i++) 
//	{
//		cin >> numbers[i];
//	}
//	
//	cout << "Mang sau khi sap xep: ";
//	for (int i = n-1; i > 0; i--)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (numbers[j] < numbers[j +1]) {
//				int tam = numbers[j];
//				numbers[j] = numbers[j+1];
//				numbers[j +1] = tam;
//			}
//		}
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		cout << numbers[i] << " ";
//	}	
	
	
//	int n, k, numbers[10];
//	cout << "n = ";
//	cin >> n;
//	
//	cout << "Nhap mang: ";
//	for (int i = 0; i < n; i++)
//	{
//		cin >> numbers[i];
//	}
//	
//	cout << "k = ";
//	cin >> k;
//	
//	cout << "Ket qua: ";
//	for (int i = 0; i < k; i++)
//	{
//		cout << numbers[i] << " ";
//	}

//	bai_tap_3
//	int n,m, arr1[20][20],arr2[20][20];
//	
//	cout << "n = ";
//	cin >> n;
//	cout << "m = ";
//	cin >> m;
//	
//	cout << "Nhap ma tran 1:" << endl;
//	for (int i =0; i < n; i++) 
//	{
//		for (int j =0; j < m; j++)
//		{
//			cin >> arr1[i][j];
//		}
//	}
//	
//	cout << "Nhap ma tran 2:" << endl;
//	for (int i =0; i < n; i++) 
//	{
//		for (int j =0; j < m; j++)
//		{
//			cin >> arr2[i][j];
//		}
//	}
//	cout << "Tong 2 ma tran:" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << arr1[i][j] + arr2[i][j] << " ";
//		}
//		cout << " " << endl;
//	}
	
	
	int n, m, arr[10][10];
	
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	
	cout << "Nhap ma tran:" << endl;
	for (int i= 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
//	cout << "Tong cac so le la: ";
	int sum = 0;
	for (int i =0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] % 2 == 1) {
				sum += arr[i][j];
			}
		}
	}
	cout << "Tong cac so le la: " << sum;
	
	return 0;
}
