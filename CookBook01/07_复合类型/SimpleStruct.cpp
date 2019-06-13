#include<iostream>
using namespace std;

typedef struct Structure {
	char c;
	int i;
	float f;
	double d;
}Structure;

int main() {
	Structure s1, s2;
	Structure* sp = &s1;
	sp->c = 'a';
	sp->i = 1;
	sp->f = 2.0;
	sp->d = 3.0;
	sp = &s2;
	sp->c = 'b';
	sp->i = 2;
	sp->f = 3.14;
	sp->d = 5.0;
}