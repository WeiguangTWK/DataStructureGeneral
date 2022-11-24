#pragma once
using StackPosition = int;
using PtrToSNode = struct SNode*;
struct SNode
{
	char* Data;
	StackPosition Top;
	int maxsize;
};
using Stack = PtrToSNode;

Stack createstack(int size);
bool IsStackFull(Stack S);
bool StackPush(Stack S, char x);
bool IsStackEmpty(Stack S);
char StackPop(Stack S);