#include<iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enter size" << endl;
	cin >> size;
	int * arr = new int[size];
	cout << "Enter elements in array:" << endl;
	for(int i=0 ; i<size;i++)
	{
		cin >> arr[i];
	}
	int temp[size];
	int min=0,max =size-1;
	bool flag = false;
	for(int i=0;i<size;i++)
	{
	if(!flag)
	{
	temp[i] = arr[max];
	max--;
	
	}
	if(flag)
	{
		temp[i] = arr[min];
		min++;
	}
	flag = !flag;
}
for(int i=0;i<size;i++)
{
	arr[i] = temp[i];
}
for(int i=0;i<size;i++)
{
	cout << " " << arr[i];
}
}
