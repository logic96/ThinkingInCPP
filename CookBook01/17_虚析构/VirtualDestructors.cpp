#include<iostream>
using namespace std;

class Base1 {
public:
	~Base1() { cout << "~Base1()\n"; }
};

class Derived1 :public Base1 {
public:
	~Derived1() { cout << "~Derieve1()\n"; }
};

class Base2 {
public:
virtual	~Base2() { cout << "~Base2()\n"; }
};

class Derived2 :public Base2 {
public:
	~Derived2() { cout << "~Derieved2()\n"; }
};

int main() {
	Base1* bp = new Derived1;
	delete bp;
	Base2* b2p = new Derived2; //向上类型转换
	delete b2p;
}
//如果想通过只想基类的指针操作这个对象（通过一般接口操纵这个对象）。当delete的时候，编译器只能知道调用这个析构函数的基类版本。因此有虚析构