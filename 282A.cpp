#include <iostream>

using namespace std;

int main()
{
	int T, x=0;
	cin >> T;

	while (T--){

		string word;
		cin >> word;

		if (word[0] == 'X'){
			if(word[1] == '+'){
				x++;
			}else{
				x--;
			}
		} else {
			if (word[1]=='+'){
				++x;
			}else{
				--x;
			}
		}
	}
	cout << x << endl;

	return 0;
}
