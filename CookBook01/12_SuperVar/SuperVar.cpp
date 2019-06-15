#include<iostream>
using namespace std;
//应用场景，主要是解决UnionClass中read_int和read_float用户可以随意调用的问题（错误的类型选择）
class SuperVar {  
	enum {
		character,
		integer,
		floating_point
	}vartype;  //直接定义了一个enum对象,可以不给enum的类型名
	union {  //匿名联合
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