#include<iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
public:
	Node() {}
	Node(int A)
	{
		next = NULL;
		data = A;

	}
};
class Handle
{
public:
	Node* head;
	Node* tail;
	Node* temp;
public:
	Handle()
	{
		head = NULL;
		tail = NULL;
	}
	void insertnode(int A)
	{
		Node* obj1 = new Node(A);
		if (head == NULL)
		{
			head = obj1;
			tail = head;
			return;
		}
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = obj1;
	}
	void Displaylist(int a)
	{
		temp = head;
		while (temp != NULL)
		{
			
			cout << temp->data;
			temp = temp->next;
		}
	}
	void DeleteNode(int size)
	{
		int a;
		cout << "Enter the value you want to remove" << endl;
		cin >> a;
		temp = head;
		while (temp->next != NULL)
		{
			if (temp->next->data == a)
			{
				Node* temp1;
				temp1 = temp->next;
				temp->next = temp->next->next;
				temp = temp->next;
				
				delete temp1;
				cout << endl <<  "Element deleted!" << endl;
				return;
			}
			temp = temp->next;
		}
	}
	void swapelement()
	{
		int a, b;
		cout << endl <<"Enter 2 elemnts to be swapped // elements swap" << endl;
		cin >> a >> b;
		temp = head;
		while (temp != NULL)
		{
			if (temp->data == a)
			{
				temp->data = b;
				if (temp->next != NULL)
				{
					temp = temp->next;
				}
			}
			
			if (temp->data == b)
			{
				temp->data = a;
				
			}
			temp = temp->next;
		}
	}
	void swapnode()
	{
		int a, b;
		cout << endl << "Enter 2 elemnts to be swapped // Node swap" << endl;
		cin >> a >> b;
		temp = head;
		Node* temp1 = NULL;
		Node* temp2 = NULL;
		while (temp->next != NULL)
		{
			if (temp->next->data == a)
			{
				Node* temp1 = temp;
				if (temp->next != NULL)
				{
					temp = temp->next;
				}
				
			}
			if (temp->next->data == b)
			{
				Node* temp2 = temp;
				
			}
			if (temp1 != NULL && temp2 != NULL)
			{
				temp = head;
				while (temp != NULL)
				{
					if (temp->data == a)
					{
						temp2->next = temp;
						temp2 = temp2->next;
						temp2->next = temp2->next->next;

						if (temp->next != NULL)
						{
							temp = temp->next;
						}
					}
					if (temp->data == b)
					{
						temp1->next = temp;
						temp1 = temp1->next;
						temp1->next = temp1->next->next;
						
					}
					temp = temp->next;
				}
			}
			temp = temp->next;
		}
	}
	void prependnode()
	{
		int A;
		cout << endl << "Enter value" << endl;
		cin >> A;
		Node* obj = new Node(A);
		Node* temp = head;
		head = obj;
		head->next = temp;
	}
	void appendnode()
	{
		int A;
		cout << endl << "enter value" << endl;
		cin >> A;
		Node* obj = new Node(A);
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = obj;
	}
	void InserNodeInBetween()
	{
		int A,B;
		cout << endl<< "After which element you want to add" << endl;
		cin >> A;
		cout << endl << "Enter element you want to add" << endl;
		cin >> B;
		Node* obj = new Node(B);
		temp = head;
		while (temp != NULL)
		{
			if (temp->data == A)
			{
				obj->next = temp->next;
				temp->next = obj;
				
				return;
			}
			temp = temp->next;
		}

	}
	};
	int main()
	{
		int a;
		int size;
		cout << "Enter no of elemnts in list" << endl;
		cin >> size;
		Handle obj;
		cout << endl << "Enter elemnts:" << endl;
		for (int i = 0; i < size; i++)
		{
			cin >> a;
			obj.insertnode(a);
		}
		obj.DeleteNode(size);
		obj.Displaylist(size);
		obj.swapelement();
		obj.Displaylist(size);
		//obj.swapnode();
		//obj.Displaylist(size);
		obj.prependnode();
		obj.Displaylist(size);
		obj.appendnode();
		obj.Displaylist(size);
		obj.InserNodeInBetween();
		obj.Displaylist(size);
	}
