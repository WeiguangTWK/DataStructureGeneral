#include<cstdlib>
#include<iostream>
#include"Queue.h"
using namespace std;

Queue createqueue(int size)
{
	Queue Q = (Queue)malloc(sizeof(struct QNode));
	Q->Data = (char*)malloc(size * sizeof(char));
	Q->Front = Q->Rear = 0;
	Q->maxsize = size;
	return Q;
}

bool IsQueueFull(Queue Q)
{
	return((Q->Rear + 1) % Q->maxsize == Q->Front);  //(Q->Rear + 1) % Q->maxsize这个式子需要花功夫理解和复习
}

bool QueueAppend(Queue Q, char x)
{
	if (IsQueueFull(Q))
	{
		cout << "队列满了！" << endl;
		return false;
	}
	else
	{
		Q->Rear = (Q->Rear + 1) % Q->maxsize;   //重点理解
		Q->Data[Q->Rear] = x;
		return true;
	}
}

bool IsQueueEmpty(Queue Q)
{
	return(Q->Front == Q->Rear);
}

char DeleteQueue(Queue Q)
{
	if (IsQueueEmpty(Q))
	{
		cout << "队列空！" << endl;
		return ' ';
	}
	else
	{
		Q->Front = (Q->Front + 1) & Q->maxsize;
		return Q->Data[Q->Front];
	}
}

