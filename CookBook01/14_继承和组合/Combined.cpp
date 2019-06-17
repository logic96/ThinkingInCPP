#include<iostream>
using namespace std;
//Inheritance & composition

class A {
	int i;
public:
	A(int ii):i(ii){} //使用初始化成员列表
	~A(){}
	void f() const{ }
};

class B {
	int i;
public:
	B(int ii) :i(ii) {}
	~B(){}
	void f() const{ }
};

class C:public B {
	A a;
public :
	C(int ii):B(ii),a(ii){ } //对于组合来说，初始化用的是对象的名字
	~C(){}
	void f() const {
		a.f();
		B::f();
	}
};//

int main() {
	C c(47);
}