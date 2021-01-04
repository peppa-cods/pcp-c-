#include <iostream>
#include <set>
#include <array>
using namespace std;

int main() { 
	set<int> s;
	s.insert(1);
	s.insert(5);
	s.insert(3);
	s.insert(1);
	s.insert(5);
	s.clear();
	cout << s.size() << endl;
	for (auto x : s){
		cout << x << endl;
	}

} 