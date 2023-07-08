#include<iostream>


const int QUEUE_SIZE{ 10 };


enum Interaction
{
	PUSH = 1,
	POP = 2
};

struct Queue
{
	int QArray[QUEUE_SIZE]{};

	int Front = QUEUE_SIZE;
	int Last = -1;
};

void Interactiontuto(Queue& queue);
void QueueMessage(Queue& queue);
void Push(Queue& queue, int input);
void Pop(Queue& queue);


int main()
{
	Queue IsQueue;

	std::cout << "Queue" << std::endl;
	Interactiontuto(IsQueue);
	QueueMessage(IsQueue);

	while (true)
	{
		int input{};
		std::cin >> input;
		
		if (input == PUSH)
		{
			int value{};
			
			std::cout << "���� �Է��ϼ���~" << std::endl;
			std::cin >> value;
			Push(IsQueue, value);
		}
		else if (input == POP)
		{
			Pop(IsQueue);
		}
	}


}

void Interactiontuto(Queue& queue)
{
	std::cout << "Tutorial" << std::endl;
	std::cout << "1. Push" << std::endl << "2. Pop" << std::endl << "----------------------" << std::endl;
}

void QueueMessage(Queue& queue)
{
	std::cout << "================" << std::endl;
	for (int i = 0; i < queue.Front; i++)
	{
		std::cout << queue.QArray[i] << std::endl;
	}
	std::cout << "================" << std::endl;
}

void Push(Queue& queue, int input)
{
	if (queue.Last == queue.Front)
	{
		std::cout << "ť�� ���� á���!" << std::endl;
		return;
	}
	queue.Last = queue.Last++;
	queue.QArray[queue.Last] = input;
	QueueMessage(queue);
}

void Pop(Queue& queue)
{
	queue.Last = -1;
	queue.Front = queue.Front--;
	if (queue.Front == queue.Last)
	{
		std::cout << "���� ������ϴ�. ���� ��������." << std::endl;
		return;
	}
	
}
