#include "Queue.h"

Queue::Queue()
	:m_Queue{}
{
	//default constructor is all we need, the queue always starts empty
}

bool Queue::IsEmpty()
{
	if (m_Queue.capacity() < 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

std::pair<int, int> Queue::GetFirstElement()
{
	if (m_Queue.size() > 0)
	{
		firstElement = m_Queue.front();
		auto it = m_Queue.begin();
		m_Queue.erase(it);
		return firstElement;
	}
	else
	{
		return { 0,0 };
	}

}

void Queue::InsertAtBack(std::pair<int, int> insertPair)
{
	m_Queue.push_back(insertPair);
}

