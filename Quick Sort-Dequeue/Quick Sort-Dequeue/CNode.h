#pragma once
#include <iostream>

#ifndef _CNODE_H__
#define _CNODE_H__

class CNode
{
public:

	int data;
	CNode* nextnode;
	CNode* prevnode;

	CNode(int _data);
};

#endif