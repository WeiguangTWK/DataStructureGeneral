#pragma once
using StackPosition = int;
using PtrToSNode = struct SNode*;
struct SNode
{
	char* Data;
	StackPosition Top;  //堆栈顶点，堆栈空时此变量值为-1
	int maxsize;
};
using Stack = PtrToSNode;

Stack createstack(int size);
bool IsStackFull(Stack S);
bool StackPush(Stack S, char x);
bool IsStackEmpty(Stack S);
char StackPop(Stack S);