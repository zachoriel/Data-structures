#include<iostream>

using namespace std;

struct node
{
	int data;
	node *next;
};

class list
{
public:
	list()
	{
		head = NULL;
		tail = NULL;
	}

	void createNewNode(int value)
	{
		node *temp = new node;
		temp->data = value;
		temp->next = NULL;

		if (head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}

	void show()
	{
		node *temp = new node;
		temp = head;
		while (temp != NULL)
		{
			cout << temp->data << "\t";
			temp = temp->next;
		}
	}

	void insertFront(int value)
	{
		node *temp = new node;
		temp->data = value;
		temp->next = head;
		head = temp;
	}

	void insertBack(int value)
	{
		node *temp = new node;
		temp->data = value;
		temp->next = tail;
		tail = temp;
	}

	void deleteFront()
	{
		node *temp = new node;
		temp = head;
		head = head->next;
		delete temp;
	}

	void deleteBack()
	{
		node *current = new node;
		node *previous = new node;
		current = head;
		while (current->next != NULL)
		{
			previous = current;
			current = current->next;
		}
		tail = previous;
		previous->next = NULL;
		delete current;
	}

private:
	node *head, *tail;
};


int main()
{
	list obj;
	obj.createNewNode(25);
	obj.createNewNode(50);
	obj.createNewNode(90);
	obj.createNewNode(40);

	cout << "Showing All Nodes:" << endl;
	obj.show();
	cout << endl;
	cout << endl;
	cout << "Adding Node At The Back:" << endl;
	obj.createNewNode(55);
	obj.show();
	cout << endl;
	cout << endl;
	cout << "Adding Node At The Front:" << endl;
	obj.insertFront(10);
	obj.show();
	cout << endl;
	cout << endl;
	cout << "Deleting Node At The Front:" << endl;
	obj.deleteFront();
	obj.show();
	cout << endl;
	cout << endl;
	cout << "Deleting Node At The Back:" << endl;
	obj.deleteBack();
	obj.show();
	cout << "\n__________________________________________________\n";

	system("pause");

	return 0;
}