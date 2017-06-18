#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T;
	string word, w1, w2, w3;

	cin >> T;

	while (T--){

		cin >> word;
		int len = word.size();

		if (len > 10){
			int kount = 0;
			for (int i=0; i<len; i++){
				if (i==0){
					w1 = word[i];
				} else if (i==len-1){
					w3 = word[i];
				} else {
					kount++ ;
				}
			}
			cout << w1 << kount << w3 << endl;
		} else {
			cout << word << endl;
		}
	}

	return 0;
}
