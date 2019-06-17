#include<iostream>
using namespace std;
//Inheritance & composition

class A {
	int i;
public:
	A(int ii):i(ii){} //ʹ�ó�ʼ����Ա�б�
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
	C(int ii):B(ii),a(ii){ } //���������˵����ʼ���õ��Ƕ��������
	~C(){}
	void f() const {
		a.f();
		B::f();
	}
};//

int main() {
	C c(47);
}