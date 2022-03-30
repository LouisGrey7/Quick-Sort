#pragma once
#include <iostream>
#include "CNode.h"


class CDeque
{
private:
	CNode* front;
	CNode* back;
	int size;

public:

	CDeque();
	bool IsEmpty();
	void EnqueueFront(int _a);
	void EnqueueBack(int _a);
	void DequeueFront();
	void DequeueBack();
	int PeekFront();
	int PeekBack();
	void Display();
};

