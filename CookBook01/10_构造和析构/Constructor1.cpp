#include<iostream>
using namespace std;
class Tree {
	int height;

public:
	Tree(int initialHeight);
	~Tree();
	void grow(int years);
	void printsize();
};
Tree::Tree(int initialHeight)
{
	height = initialHeight;

}
Tree::~Tree() {
	cout << "inside Tree destructor" << endl;
	printsize();
}

void Tree::grow(int years) {
	height += years;
}

void Tree::printsize() {
	cout << "Tree height is " << height << endl;
}

int main() {
	cout << "befor opening brace" << endl;
	{
		Tree t(12);
		cout << "after Tree creation" << endl;
		t.printsize();
		t.grow(4);
		cout << "before closing brace" << endl;
	}//语句块结束处调用析构
	cout << "after closing brace" << endl;
}