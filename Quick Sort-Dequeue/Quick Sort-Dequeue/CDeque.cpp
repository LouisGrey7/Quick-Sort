#include "CDeque.h"


CDeque::CDeque()
{
	front = NULL;
	back = NULL;
	size = 0;
}

bool CDeque::IsEmpty()
{
	return (front == NULL);
}

void CDeque::EnqueueFront(int _data)
{
	CNode* newNode = new CNode(_data);
	// If true then new element cannot be added
	// and it is an 'Overflow' condition

	if (newNode == NULL)
	{
		std::cout << "OverFlow\n";
	}
	else
	{
		// If deque is empty
		if (front == NULL)
		{
			back = front = newNode;
		}
		// Inserts an element at the beginning of the list
		else
		{
			newNode->nextnode = front;
			front->prevnode = newNode;
			front = newNode;
		}
		// Increase size by 1
		size++;
	}
}

void CDeque::EnqueueBack(int _data)
{
	CNode* newNode = new CNode(_data);
	// if newNode is Null then no nodes can be created as 
	 // memory is full
	if (newNode == NULL)
	{
		std::cout << "OverFlow\n";
	}
	else
	{
		// If deque is empty
		if (back == NULL)
		{
			front = back = newNode;
		}
		// Inserts an element at the end of the list
		else
		{
			newNode->prevnode = back;
			back->nextnode = newNode;
			back = newNode;
		}
		// Increase size by 1
		size++;
	}
}

void CDeque::DequeueFront()
{
	// If there are no elements in deque, we cannot delete 
	// anything
	if (IsEmpty())
	{
		std::cout << "UnderFlow\n";
	}
	// Delete the front node and update the ‘head’ pointer as  
	 // well as update the links 
	else
	{
		CNode* tempnode = front;
		front = front->nextnode;
		// If only one element was present
		if (front == NULL)
		{
			back = NULL;
		}
		else
		{
			front->prevnode = NULL;
			free(tempnode);
		}
		// Decrease ‘size’ by 1
		size--;
	}
}

void CDeque::DequeueBack()
{
	// If there are no elements in deque, we cannot delete 
   // anything
	if (IsEmpty())
	{
		std::cout << "UnderFlow\n";
	}
	// Delete the back node and update the ‘tail’ pointer as  
	 // well as update the links
	else
	{
		CNode* temp = back;
		back = back->prevnode;
		// If only one element was present
		if (back == NULL)
			front = NULL;
		else
			back->nextnode = NULL;
		free(temp);
		// Decrease ‘size’ by 1
		size--;
	}
}

int CDeque::PeekFront()
{
	// If there are no elements in deque, return -1
	if (IsEmpty())
	{
		return -1;
	}
		return front->data;
}

int CDeque::PeekBack()
{
	// If there are no elements in deque, return -1
	if (IsEmpty())
	{
		return -1;
	}
		return back->data;
}




void CDeque::Display()
{
	if (front == nullptr)
	{
		std::cout << "Deque is Empty";

	}
	else
	{
		CNode* currentNode = front;
		while (true)
		{
			int data = currentNode->data;
			std::cout << "[";
			std::cout << data;
			std::cout << "] ";
			if (currentNode->nextnode == nullptr)
			{
				break;
			}
			else
			{

				currentNode = currentNode->nextnode;
			}
		}

	}

}