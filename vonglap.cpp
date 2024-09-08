#include <iostream>
int main () {
	
//	bai tap 1
std::cout << "bai tap 1 tinh tong" << std::endl;
	int a =4, tong = 0;
	std::cout << "n = " << a << std::endl;
	for (int i = 0; i <= a ; i++ ) {
		tong += i  ;
	}
	std::cout << "S = " << tong << std::endl;


//	bai tap 2
std::cout << "bai tap 2 tinh luy thua" << std::endl;
	int b = 4, tich = 0;
	std::cout << "n = " << b << std::endl;
	for (int i = 0; i <= b; i++) {
		tich += (i * i) ;
//		thuc hien i * i roi tich them 1 gia tri
	}
	std::cout << "S = " << tich << std::endl;



	return 0;
	
}
