#include <utility>
#include <vector>
#ifndef QUEUE
#define QUEUE
class Queue
{
private:
	std::vector< std::pair<int, int> > m_Queue = {};
	std::pair<int, int> firstElement;
public:
	Queue();
	
	void InsertAtBack(std::pair<int, int>);
	std::pair<int, int> GetFirstElement();
	bool IsEmpty();
	
};
#endif