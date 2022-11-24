#pragma once
using QueuePosition = int;
using PtrToQNode = struct QNode*;
struct QNode
{
	char* Data;
	QueuePosition Front, Rear;
	int maxsize;
};
using Queue = PtrToQNode;

Queue createqueue(int size);
bool IsQueueFull(Queue Q);
bool QueueAppend(Queue Q, char x);
bool IsQueueEmpty(Queue Q);
char DeleteQueue(Queue Q);