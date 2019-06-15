#pragma once
typedef unsigned char byte;

class Mem {
	byte* mem; //byte块
	int size;
	void ensureMinSize(int minSize);
public:
	Mem();
	Mem(int sz);
	~Mem();
	int msize();//Mem对象中还有多少字节
	byte* pointer();
	byte* pointer(int minSize); //这个重载的函数可以用默认参数的方式来代替byte* pointer(int minSize=0);
};
