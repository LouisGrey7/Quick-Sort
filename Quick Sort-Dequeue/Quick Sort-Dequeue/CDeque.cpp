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
	

	if (newNode == NULL)
	{
		std::cout << "Over Flow \n";
	}
	else
	{

		if (front == NULL)
		{
			back = front = newNode;
		}
		else
		{
			newNode->nextnode = front;
			front->prevnode = newNode;
			front = newNode;
		}

		size++;

	}
}

void CDeque::EnqueueBack(int _data)
{
	CNode* newNode = new CNode(_data);
	
	if (newNode == NULL)
	{
		std::cout << "Over Flow \n";
	}
	else
	{
		if (back == NULL)
		{
			front = back = newNode;
		}
		else
		{
			newNode->prevnode = back;
			back->nextnode = newNode;
			back = newNode;
		}
		size++;
	}
}

void CDeque::DequeueFront()
{

	if (IsEmpty())
	{
		std::cout << "Under Flow \n";
	}
	else
	{
		CNode* tempnode = front;
		front = front->nextnode;
		
		if (front == NULL)
		{
			back = NULL;
		}
		else
		{
			front->prevnode = NULL;
			delete tempnode;
		}
			size--;
		

	}
}

void CDeque::DequeueBack()
{

	if (IsEmpty())
	{
		std::cout << "Under Flow \n";
	}
	else
	{
		CNode* tempnode = back;
		back = back->prevnode;
		
		if (back == NULL)
		{
			front = NULL;
		}
		else
		{
			back->nextnode = NULL;
			delete tempnode;
		}
			size--;
	}
}

int CDeque::PeekFront()
{
	if (IsEmpty())
	{
		return NULL;
	}
		return front->data;
}

int CDeque::PeekBack()
{
	if (IsEmpty())
	{
		return NULL;
	}
		return back->data;
}

int CDeque::Size()
{
	return size;
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