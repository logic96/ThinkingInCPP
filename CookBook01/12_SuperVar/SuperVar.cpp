#include<iostream>
using namespace std;
//Ӧ�ó�������Ҫ�ǽ��UnionClass��read_int��read_float�û�����������õ����⣨���������ѡ��
class SuperVar {  
	enum {
		character,
		integer,
		floating_point
	}vartype;  //ֱ�Ӷ�����һ��enum����,���Բ���enum��������
	union {  //��������
		char c;
		int i;
		float f;
	};
public:
	SuperVar(char ch);
	SuperVar(int ii);
	SuperVar(float ff);
	void print();

};

SuperVar::SuperVar(char ch) {
	vartype = character;
	c = ch;
}
SuperVar::SuperVar(int ii) {
	vartype = integer;
	i = ii;
}
SuperVar::SuperVar(float ff) {
	vartype = floating_point;
	f=ff;
}

void SuperVar::print() {
	switch (vartype) {
	case character:
		cout << "character: " << c << endl;
		break;
	case integer:
		cout << "integer: " << i << endl;
		break;
	case floating_point:
		cout << "floating point: " << f << endl;
		break;
	
	}

}

int main() {
	SuperVar A('C'), B(12), C(3.14f);
	A.print();
	B.print();
	C.print();
}