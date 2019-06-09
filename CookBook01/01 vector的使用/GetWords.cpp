#include<string>
#include<fstream>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	fstream in("GetWords.cpp");
	vector<string>words;
	string word;
	while (in >> word)
		words.push_back(word);
	for (int i = 0; i < words.size(); i++) {
		cout << words[i] << endl;
	}
	system("pause");
}