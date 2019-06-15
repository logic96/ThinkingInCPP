#pragma once
class Handle {
	struct Cheshire; //class declaration only 类的前置声明
	Cheshire* smile;
public:
	void initialize();
	void cleanup();
	int read();
	void change(int);
};

/*Handle的使用也体现了一种桥的设计模式*/