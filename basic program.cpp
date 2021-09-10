#include<iostream>
using namespace std;
int sum=0;
int func(int b,int arr[10]);
int main()
{
int a;
int  arr[10]={0};
cout << "Enter a number" << endl;
cin >> a;
if(a>0)
func(a,arr);
cout << "Sum of Factors are: " << sum << endl;
cout << "Factors are: " << endl;
for(int i=0;i<10;i++)
{
	if(arr[i]!= 0)
	{
	
	cout << arr[i] << endl;
}
}
}
int func(int b, int * arr )
{
int k=0;
for(int x =1; x <=b ; x++)
{
	if(b%x==0)
	{
		arr[k]=x;
		sum=sum+x;
		k++;   
	}
}
return arr[10];
}