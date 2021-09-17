#include<iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enter size of array" << endl;
	cin >> size;
	int *  arr = new int [size];
	cout << "Enter array elements" << endl;
	for(int i=0;i<size;i++)
	{
		cin >> arr[i];
	}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[i] = temp;
			}
		}
	}
	cout << "ASCENDING" << endl;
	for(int i=0;i<size;i++)
	{
		cout << " " << arr[i];
	}
	cout <<endl <<  "DESCENDING" << endl;
	for(int i=size-1;i>=0;i--)
	{
		cout << " " << arr[i];
	}
	delete[] arr;
}
