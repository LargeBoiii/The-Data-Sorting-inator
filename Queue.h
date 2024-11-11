#include <utility>
#include <vector>
#include <iostream>
#ifndef MYQUEUE
#define MYQUEUE
class Queue
{
private:
	std::vector< std::pair<int, int> > m_Queue = {};
public:
	Queue();
	
	void InsertAtBack(std::pair<int, int>);
	std::pair<int, int> GetFirstElement();
	bool IsEmpty();
	
};
#endif

/*Need
* insert into queue
* pop from queue
* check if queue is empty
*/