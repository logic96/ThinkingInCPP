#include<iostream>
using namespace std;

void func()
{
	cout << "func() called..." << endl;
}

int main()
{
	void (*fp)(); //define a function pointer
	fp = func;  //Initilaize it
	(*fp)();  //Dereference calls the fuction
	void(*fp2)() = func; //define and initilaize
	(*fp)();
}