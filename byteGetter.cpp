#include <iostream>
#include <vector>
using namespace std;


vector<int> hexToBytes (int num, int numBytes) {

	vector <int> answer;

	cout << hex << num  << endl;

	for (int i = 0; i < numBytes; i ++) {
		for (int j = 0; j < i; j ++) {
			num = num << 2;
		}
		num = 0XFF&num;
		cout << i << ": " << num <<endl;
		answer.push_back(num);
	}

	return answer;
}


int main () {
	int num = 0XC0F0, numBytes = 2;

	vector <int> ans = hexToBytes(num, numBytes);

	cout << hex << ans[1] << " " <<  hex << ans[0] << endl;

	return 1;
	
}
