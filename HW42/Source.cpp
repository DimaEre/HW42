#include<iostream>
#include<deque>


using namespace std;

void show(deque<int> a, deque<int> b) 
{
	for (size_t i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (size_t i = 0; i < b.size(); i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
}
int main()
{
	deque<int> a;
	deque<int> b;
	int size = 0;
	cout << "Size of first deque:	";
	cin >> size;
	for (size_t i = 0; i < size; i++)
	{
		a.push_back(rand() % 10);
	}
	cout << "Size of second deque:	";
	cin >> size;
	for (size_t i = 0; i < size; i++)
	{
		b.push_back(rand() % 10);
	}
	
	show(a, b);

	if (a.size() % 2 == b.size() % 2)
	{
		a.swap(b);
	}
	
	show(a, b);
}