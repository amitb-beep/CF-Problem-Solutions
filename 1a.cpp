#include <iostream>

using namespace std;

int main()
{
	int n, m, a;

	cin >> n >> m >> a;

	int num=(n*m)/(a*a);
	if((num*a*a) < (n*m)){
		cout << num++ << endl;
	} else {
		cout << num << endl;
	}

	return 0;
}
