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
	Base2* b2p = new Derived2; //��������ת��
	delete b2p;
}
//�����ͨ��ֻ������ָ������������ͨ��һ��ӿڲ���������󣩡���delete��ʱ�򣬱�����ֻ��֪������������������Ļ���汾�������������