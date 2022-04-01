#include "CommandQueue.h"

void CommandQueue::Push(const Command newCommand)
{
	mQueue.push(newCommand);
}

Command CommandQueue::Pop()
{
	Command temp;
	if(!IsEmpty())
	{
		temp = mQueue.front();
		mQueue.pop();
		return temp;
	}
}

bool CommandQueue::IsEmpty() const
{
	if (mQueue.size() > 0)
	{
		return false;
	}
	return true;
}
