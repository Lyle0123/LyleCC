#include <iostream>
#include <vector>
using namespace std;
vector<int>* Binary(vector<int>&a, int n,const int size)
{
	int count = 0;
	while ((n / 2)!=0)
	{
		a.push_back(n % 2);
		n /= 2;
		count++;
	}
	a.push_back(n % 2);
	for (int i = 0; i <(size-count-1); ++i)
	{
		a.push_back(0);
	}
	return &a;
}
void print(vector<int>&a)
{
	vector<int>::reverse_iterator it = a.rbegin();
	for (it; it != a.rend(); ++it)
	{
		cout << *it;
	}
	cout << endl;
}
int main()
{
	const int size = 8;
	vector<int>a;
	int n;
	cin >> n;
	a = *Binary(a, n, size);
	print(a);
    system("pause");
    return 0;
}