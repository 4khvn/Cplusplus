#include<iostream>
using namespace std;
int main()
{
	int stud;
	cout << "Enter number of students" << endl;
	cin >> stud;
	int size[stud];
	float gpa[stud];
	float ** arr = new float*[stud];
	for(int i=0;i<stud;i++)
	{
		
		cout << "Enter number of courses for student "  << i+1 << " " ;
		cin >> size[i];
		arr[i] = new float[size[i]];
	}
		cout << endl;
		cout << "Enter gpa of courses" << endl;
		for(int i=0;i<stud;i++)
		{
		float temp=0;
		cout << endl;
		cout << "Gpa of student " << i+1 << endl;
		cout << endl;
		for(int j=0 ; j<size[i] ;j++)
		{
			cout << "Gpa of course: " <<j+1 << "   ";
			cin >> arr[i][j];
			temp+=arr[i][j];
			//temp = temp/(j+1);
		}
		temp /= size[i];
		gpa[i] = temp;
	}
	for(int i=0 ;i<stud;i++)
	{
	cout << gpa[i] << endl;
		}	
			
	}
	/**cout << "Gpa: " << endl;
	for(int i=0 ;i<stud;i++)
	{
		cout << "Student " << i+1 << " " << gpa[i] << endl; 
	}**/
	


