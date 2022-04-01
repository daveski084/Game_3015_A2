#pragma once
#include <iostream>
#include <Queue>
#include <functional>
#include "SceneNode.h"

/* Command structure from page 2 of assignment 2.*/

struct Command
{
	Command() = default;

	// Command name
	std::string name;

	// Lambda function for command.
	std::function<void(SceneNode&, const GameTimer& gt)> action;
	
	// Command category
	unsigned int category;
};

// Command queue structure from page 4 of assignment 2. 
class CommandQueue
{
private:
	//Using queue for FIFO commands.
	std::queue<Command> mQueue;

public:

	// Push commands into the command queue.
	void Push(const Command newCommand);

	// Remove commands from the command queue.
	Command Pop();

	// Return if queue is empty. 
	bool IsEmpty() const;

};

