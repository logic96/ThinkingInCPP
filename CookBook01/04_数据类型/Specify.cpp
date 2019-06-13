#include<iostream>
using namespace std;
int main() {
	bool b;
	char c;
	unsigned char cu;
	int i;
	unsigned int iu;
	short int is;
	short iis;//Same as short int
	unsigned short int isu;
	unsigned short iisu;
	long int il;
	long iil;//Same as long int 
	float f;
	double d;
	long double ld;
	cout
		<<"\n bool= "<<sizeof(b)
		<< "\n char= " << sizeof(c)
		<< "\n unsigned char =" << sizeof(cu)
		<< "\n int= " << sizeof(i)
		<< "\n unsigned int= " << sizeof(iu)
		<< "\n short= " << sizeof(i)
		<< "\n int= " << sizeof(iis)
		<< "\n unsigned short int= " << sizeof(isu)
		<< "\n unsigned short= " << sizeof(iisu)
		<< "\n long int=" << sizeof(il)
		<< "\n long =" << sizeof(iil)
		<< "\n float =" << sizeof(f)
		<< "\n double =" << sizeof(d)
		<< "\n long double =" << sizeof(ld) << endl;
	
}