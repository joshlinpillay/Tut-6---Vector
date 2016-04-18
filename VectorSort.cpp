#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector <int> v;
	int i;
	for (i = 20; i > 0; i--) {
		v.push_back(i);
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	for (i = 0; i < 20; i++) {
		cout << v.at(i) << endl;
	}
	return 0;
}