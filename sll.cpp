#include <iostream>
#include <string>
using namespace std;

class Node;

class SinglyLinkedList
{
	Node* head = NULL;

public:

	bool insertAtIndex(int index, int data);
	void insertAtBeginning(int data);
	void insertAtEnd(int data);

	bool deleteAtIndex(int index);
	void deleteAtBeginning();
	void deleteAtEnd();

	int search(int data);

	void print();

	void reverse();
};

int main(int argc, char** argv)
{
	if (argc > 1)
	{
		string test = argv[1];
		
		SinglyLinkedList a;
		
		if (test == "000")
		{
			a.insertAtBeginning(0);
			a.print();	//Should print: 0 
		}

		if (test == "001")
		{
			a.insertAtIndex(0, 0);
			a.insertAtIndex(1, 1);
			a.insertAtIndex(2, 2);
			a.insertAtIndex(3, 3);
			a.insertAtIndex(4, 4);
			a.print();	//Should print: 0 1 2 3 4
		}

		if (test == "002")
		{
			a.insertAtIndex(0, 0);
			a.insertAtIndex(1, 1);
			a.insertAtIndex(2, 3);
			a.insertAtIndex(3, 4);
			a.insertAtIndex(2, 2);
			a.print();	//Should print: 0 1 2 3 4
		}

		if (test == "003")
		{
			a.insertAtIndex(0, 0);
			a.insertAtIndex(1, 1);
			a.insertAtIndex(2, 2);
			a.insertAtIndex(3, 3);
			a.insertAtEnd(4);
			a.print();	//Should print: 0 1 2 3 4
		}

		if (test == "004")
		{
			a.insertAtIndex(0, 0);
			a.insertAtIndex(1, 1);
			a.insertAtIndex(2, 2);
			a.insertAtIndex(3, 3);
			a.insertAtIndex(4, 4);
			
			a.deleteAtBeginning();
			
			a.print();	//Should print: 1 2 3 4
		}

		if (test == "005")
		{
			a.insertAtIndex(0, 0);
			a.insertAtIndex(1, 1);
			a.insertAtIndex(2, 2);
			a.insertAtIndex(3, 3);
			a.insertAtIndex(4, 4);
			
			a.deleteAtEnd();
			
			a.print();	//Should print: 0 1 2 3
		}

		if (test == "006")
		{
			a.insertAtIndex(0, 0);
			a.insertAtIndex(1, 1);
			a.insertAtIndex(2, 2);
			a.insertAtIndex(3, 3);
			a.insertAtIndex(4, 4);
			
			a.deleteAtIndex(2);
			
			a.print();	//Should print: 0 1 3 4
		}

		if (test == "007")
		{
			a.insertAtIndex(0, 0);
			a.insertAtIndex(1, 1);
			a.insertAtIndex(2, 2);
			a.insertAtIndex(3, 3);
			a.insertAtIndex(4, 4);
			
			if (a.search(2) == 2)
			{
				cout << "Found 2 at index: 2\n";
			}						
		}

		if (test == "008")
		{
			a.insertAtIndex(0, 0);
			a.insertAtIndex(1, 1);
			a.insertAtIndex(2, 2);
			a.insertAtIndex(3, 3);
			a.insertAtIndex(4, 4);
			
			if (a.search(5) == -1)
			{
				cout << "5 does not exist in the list\n";
			}						
		}
	}
		
	return 0;
}

class Node
{
	int data;
	Node* next = NULL;

public:

	Node()
	{
		next = NULL;
	}

	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
	
	int getData()
	{
		return data;
	}

	Node* getNext()
	{
		return next;
	}

	void setData(int data)
	{
		this->data = data;
	}

	void setNext(Node* next)
	{
		this->next = next;
	}

};

bool SinglyLinkedList::insertAtIndex(int index, int data) {}

void SinglyLinkedList::insertAtBeginning(int data) {}
void SinglyLinkedList::insertAtEnd(int data) {}

bool SinglyLinkedList::deleteAtIndex(int index) {}
void SinglyLinkedList::deleteAtBeginning() {}
void SinglyLinkedList::deleteAtEnd() {}

int SinglyLinkedList::search(int data) {}

void SinglyLinkedList::print() {}
