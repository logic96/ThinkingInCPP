#pragma once
class Handle {
	struct Cheshire; //class declaration only ���ǰ������
	Cheshire* smile;
public:
	void initialize();
	void cleanup();
	int read();
	void change(int);
};

/*Handle��ʹ��Ҳ������һ���ŵ����ģʽ*/