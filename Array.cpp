#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
void display(int arr[],int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i]<< ' ';
	}
	cout << '\n';
}
void bubber_sort(int arr[], int size)//��̬�����뾲̬��������𣺾�̬�����������ǵ�ַ����̬���鲻�ǣ���������ʱ��ע�⣻
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1 - i; ++j)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 3, 4, 5, 6, 1, 2, 7, 8, 9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "����ǰ�����飺";
	display(arr, size);
	cout << "���������飺";
	bubber_sort(arr, size);
	display(arr,size);
	system("pause");
	return 0;
}