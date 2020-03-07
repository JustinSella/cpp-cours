#include <iostream>
#include <td_ptr.h>

using namespace std;

int main()
{
	cout << "===== [Swap function] =====" << endl;
	int a = 1;
	int b = 2;
	swapInt(&a, &b);
	cout << a << ' ' << b << endl;

	cout << "===== [Array limits function] =====" << endl;
	int arr[7] = {-10,999,0,56,9,1,101};
	int min;
	int max;
	limitsArray(arr, 7, &min, &max);
	cout << min << ' ' << max << endl;

	cout << "===== [Array filler function] =====" << endl;
	int arr2[5];
	askArray(arr2);
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i];
		if (i < 4) cout << ", ";
	}
}