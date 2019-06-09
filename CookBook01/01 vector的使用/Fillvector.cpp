#include<vector>
#include<fstream>
#include<iostream>
#include<string>
using namespace std;

//使用getline获取一行字符串
int main()
{
	vector<string>v;
	ifstream in("Fillvector.cpp");
	string line;
	while (getline(in, line))
		v.push_back(line);
	for (int i = 0; i < v.size(); i++) {
		cout << i << ": " << v[i] << endl;
	}
	system("pause");
}