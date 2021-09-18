#include<iostream>
using namespace std;
class DynamicSafeArrays
{
public:
	int* arr;
	int size;
public:
	DynamicSafeArrays()
	{
		cout << "Enter size of array: " << endl;
		cin >> size;
		arr = new int[size];
		cout << "Enter elments of array " << endl;
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
	}
	~DynamicSafeArrays(){}
	bool operator ==( const DynamicSafeArrays& obj2)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (this->arr[i] == obj2.arr[j])
				{
					return true;
					
				}
			}
		}
	}
};
int main()
{
	DynamicSafeArrays obj1,obj2;
	if (obj1 == obj2)
	{
		cout << "Arrays are disjoint" << endl;
	}
	else
	{
		cout << "Arrays are not same";
	}
}
