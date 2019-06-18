#include<iostream>
using namespace std;

class Pet { public:virtual ~Pet() {} };
class Dog :public Pet {};
class Cat :public Pet {};

int main() {
	Pet* b = new Cat;//Upcast
	Dog* d1 = dynamic_cast<Dog*>(b);//���Խ���ת��ΪDog*,��ʧ��
	Cat* d2 = dynamic_cast<Cat*>(b);
	cout << "d1= " << (long)d1 << endl;
	cout << "d2= " << (long)d2 << endl;
}