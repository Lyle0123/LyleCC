#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>&arr)
{ 
	for (int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] <<' ';
	}
	cout << "\n";
}
void swap(int &n1, int &n2)
{
	int tmp = n1;
	 n1=n2;
	n2=tmp;
}
void bubber_sort(vector<int>&arr)
{
	for (int i = 0; i < arr.size() - 1; ++i)
	{
		for (int j = 0; j < arr.size() - 1 - i; ++j)
		{
			if (arr[j]>arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
int main()
{
	int arr1[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	vector<int>arr(arr1, arr1 + 10);
	display(arr);
	bubber_sort(arr);
	display(arr);
	system("pause");
	return 0;
}