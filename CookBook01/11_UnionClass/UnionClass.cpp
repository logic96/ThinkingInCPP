//Union with constructors and member functions
#include<iostream>
using namespace std;

union U {
private:
	int i;
	float f;
public:
	U(int a);
	U(float b);
	~U();
	int read_int();
	float read_float();
};

U::U(int a) { i = a; }
U::U(float b) { f = b; }
U::~U() { cout << "union 的析构函数调用" << endl; }

int U::read_int() { return i; }
float U::read_float() { return f; }

int main() {
	U X(12), Y(1.9f);
	cout << X.read_int() << endl;
	cout << Y.read_float() << endl;
}