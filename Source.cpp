#include <iostream>
#include<ctime>
using namespace std;
int main()
{
	const int n = 12;
	int a[n];
	int t;
	srand(time(0));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 101 - 50;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		int max = a[i];
		int s = i;
		for (int j = i; j < n; j++) {
			if (a[j] > max) {
				max = a[j];
				s = j;
			}
		}
		swap(a[i], a[s]);
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}

	return 0;
}