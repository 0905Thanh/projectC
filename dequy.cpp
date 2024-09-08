#include <iostream>
using namespace std;

//long xN(int x, int n) {
//	if(n==1)
//		return x;
//	else
//		return xN(x,n-1)*x;
//}
//long facN(int n){
//	
//}

long UCLN(int a, int b);
float tinhTong (int n, float s);
float tinhTich (int n, int x, float s);
int main() {
		int n = 9;
		float s = 0;
		int x = 3;
//		cout << tinhTong(n, s);
		cout << tinhTich(n, x, s);
		
	return 0;
}

float tinhTich (int n, int x, float s) {
	for (int i = 1; i < n; i ++) {
		s = x*i + s;
	}
}
float tinhTong (int n, float s) {
	for (int i = 1; i <= n; i++)
		s = i/(i+1) + s;
}

//long UCLN(int a, int b){
//	if (a == b)
//		return a;
//	else if (a > b)
//		return UCLN (a-b,b);
//	else 
//		return UCLN (a,b-a);
//	
//}

