#include<iostream>
using namespace std;
//利用虚函数实现晚绑定（在运行时根据类型将函数于函数体绑定）
enum note{middleC,Csharp,Cflat};

class Instrument {
public:
	virtual void play(note) const {
		cout << "Instrument::play" << endl;
	}
};

class Wind : public Instrument {
public:
	void play(note)const {
		cout << "Wind::play" << endl;
	}
};

void tune(Instrument& i) {
	i.play(middleC);
}

int main() {
	Wind flute;
	tune(flute);
}