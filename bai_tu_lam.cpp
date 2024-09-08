#include <iostream>
using namespace std;

void nhapSo (int so_nhap[20]) {
	for (int i = 1; i < 5; i++) {
		cin >> so_nhap[i];
	}
	cout << "4 chu so vua nhap: ";
	for (int i = 1; i < 5; i++) {
		cout << so_nhap[i];
	}
}
void kiemTraSo (int so_nhap[20], int so_dung[20]) {
	for (int i = 1; i < 5; i++) {
		if (so_nhap[i] = so_dung[i]) 
		{
		cout <<"Bai toan thanh cong";
		
		} else {
		cout <<"Bai toan khong hop le. Yeu cau nhap lai"<< endl;
		nhapSo(so_nhap);
		cout << endl;
		}
	}
}

int main () {
	int so_dung[20] = {7, 5, 6, 8};
	int so_nhap[20];
	cout << "Hay nhap vao 4 chu so tu 1 den 9 va dung thu tu cua tung chu so" << endl;
	nhapSo(so_nhap);
	cout << endl;
	int i = 0;
	do{
		kiemTraSo(so_nhap, so_dung);
		i++;
	} while (i < 9);
	
	return 0;
}
	
