#pragma once
typedef unsigned char byte;

class Mem {
	byte* mem; //byte��
	int size;
	void ensureMinSize(int minSize);
public:
	Mem();
	Mem(int sz);
	~Mem();
	int msize();//Mem�����л��ж����ֽ�
	byte* pointer();
	byte* pointer(int minSize); //������صĺ���������Ĭ�ϲ����ķ�ʽ������byte* pointer(int minSize=0);
};
