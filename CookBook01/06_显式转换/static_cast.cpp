#include<iostream>
using namespace std;

void func(int);

int main() {
	int i = 0x7fff;//MaxPos value =32767
	long l;
	float f;
	//(1) Typicla castless conversions
	l = i;
	f = i;
	l = static_cast<long>(i);
	f = static_cast<float>(i);
	//(2)Narrowing conversions Õ­»¯±ä»»
	i = l;
	i = f;
	i = static_cast<int>(l);
	i = static_cast<int>(f);
	char c = static_cast<char>(i);


	//(3)Forcing a conversion from void *
	void* vp = &i;
	//Old way produces a dangerous conversion:
	float* fp = (float*)vp;
	//The new way is equally dangerous:
	fp = static_cast<float*>(vp);
	//(4)Implicate type conversions,normally
	//performed by the compiler:
	double d = 0.0;
	int x = d;//automatic type conversion
	x = static_cast<int>(d);
	func(d);
	func(static_cast<int>(d));

}

void func(int) {
	cout << "this is a func" << endl;
	cout << (1 and 0) << endl;
}