#include <iostream>

int main ()
{
	int a,b ;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	
//	bai tap 2
	char c;
	std::cin >> c;
	std::cout << "Chu cai viet thuong:" << c << std::endl;
	std::cout << "Chu cai viet hoa:" <<(char) (c - 32) << std::endl;
//	bai tap 3
	int d,e;
	std::cout << "d = ";
	std::cin >> d;
	std::cout << "e = ";
	std::cin >> e;
	int f = d;
	d = e;
	e = f;
	std::cout << "Sau khi hoan doi" << std::endl;
	std::cout << "Gia tri cua d = " << e << std::endl;
	std::cout << "Gia tri cua e = " << d ;
//	bai tap 4
	int g,h;
	std::cin >> f;
	std::cin >> h; 
	return 0;
}
