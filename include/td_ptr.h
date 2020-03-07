#include <iostream>

using namespace std;

void swapInt(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}

void limitsArray(int arr[], int length, int *min, int *max)
{
	for (int i = 0; i < length; i++)
	{
		if (i == 0 || arr[i] < *min) *min = arr[i];
		if (i == 0 || arr[i] > *max) *max = arr[i];
	}
	return;
}

void askArray(int *arr)
{
	int input;
	for (int i = 0; i < 5; i++)
	{	
		cout << "Enter an int: ";
		cin >> input;
		arr[i] = input;
	}
}