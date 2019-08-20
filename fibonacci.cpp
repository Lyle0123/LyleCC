#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
bool fibonacci(int pos, int &elem)
{
	/*if (n == 1 || n == 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);*/
	//const int t = 1;
	int n1 = 1, n2 = 1;
	if (pos == 1 || pos == 2)
	{
		elem = 1;
	}
	for (int i = 3; i <= pos; i++)
	{
	    	elem = n1 + n2;
			n2 = n1;
			n1 = elem;
	}
	return true;
}
int main()
{
	int elem;
	int pos;
	while (1)
	{
		cout << "Please input a position:";
		cin >> pos;
		if (fibonacci(pos, elem))
		{
			cout << "element # " << pos << " is " << elem;
			cout << '\n';
		}
		if (pos == 15)
		{
			break;
		}
	}
	cout << '\n';
	system("pause");
	return 0;
}