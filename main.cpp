#include <iostream>
#include <utility>
#include <list>
using namespace std;

int main() {

	cout << "hello world" << endl;
	cout << "list practice" << endl;
	list<char> char_list;

	for (char i = 'a'; i <= 'z'; ++i) {
		char_list.push_back(i);
	}

	for (auto iter = char_list.begin(); iter != char_list.end(); ++iter) {
		cout << *iter << endl;
	}
}
