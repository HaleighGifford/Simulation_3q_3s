//****************************************************************************************************

#ifndef QUEUE_H
#define QUEUE_H
#include "node.h"

//****************************************************************************************************

template <typename TYPE>
class Queue
{
private:
	Node<TYPE> * front;
	Node<TYPE> * rear;
	int numValues;
public:
	Queue();
	~Queue();

	bool enqueue(const TYPE & dataIn);
	bool dequeue(TYPE & dataOut);

	bool viewFront(TYPE & dataOut) const;
	bool viewRear(TYPE & dataOut) const;
	int getNumValues() const;
	bool isFull() const;
	bool isEmpty() const;
};

//****************************************************************************************************

template <typename TYPE>
Queue<TYPE> ::Queue()
{
	front = nullptr;
	rear = nullptr;
	numValues = 0;
}

//****************************************************************************************************

template <typename TYPE>
Queue<TYPE> ::~Queue()
{
	Node<TYPE> * pTemp = front;

	while (front)
	{
		pTemp = pTemp->next;
		delete front;
		front = pTemp;
	}

	rear = nullptr;
	numValues = 0;
}

//****************************************************************************************************

template <typename TYPE>
bool Queue<TYPE> ::enqueue(const TYPE & dataIn)
{
	bool success = false;
	Node<TYPE> * pNew;

	pNew = new(nothrow) Node<TYPE>(dataIn);

	if (pNew)
	{
		if (rear)
			rear->next = pNew;
		else
			front = pNew;

		rear = pNew;
		numValues++;
		success = true;
	}

	return success;
}

//****************************************************************************************************

template <typename TYPE>
bool Queue<TYPE> ::dequeue(TYPE & dataOut)
{
	bool success = false;
	Node<TYPE> * pTemp = front;

	if (front)
	{
		dataOut = front->data;
		front = front->next;
		numValues--;
		delete pTemp;
		success = true;
	}

	if (front == nullptr)
		rear = nullptr;

	return success;
}

//****************************************************************************************************

template <typename TYPE>
bool Queue<TYPE> ::viewFront(TYPE & dataOut) const
{
	bool success = false;

	if (front)
	{
		dataOut = front->data;
		success = true;
	}

	return success;
}

//****************************************************************************************************

template <typename TYPE>
bool Queue<TYPE> ::viewRear(TYPE & dataOut) const
{
	bool success = false;

	if (rear)
	{
		dataOut = rear->data;
		success = true;
	}

	return success;
}

//****************************************************************************************************

template <typename TYPE>
int Queue<TYPE> ::getNumValues() const
{
	return numValues;
}

//****************************************************************************************************

template <typename TYPE>
bool Queue<TYPE> ::isFull() const
{
	bool full = true;
	Node<TYPE> * pNew;

	pNew = new(nothrow) Node<TYPE>();

	if (pNew)
	{
		full = false;
		delete pNew;
	}

	pNew = nullptr;

	return full;
}

//****************************************************************************************************

template <typename TYPE>
bool Queue<TYPE> ::isEmpty() const
{
	return (!front);
}

//****************************************************************************************************

#endif

