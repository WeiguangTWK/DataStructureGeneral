#pragma once
//¶þ²æÊ÷

using BTPosition = struct TNode*;
using BinTree = BTPosition;
struct TNode
{
	char Data;  //Êý¾Ý
	BinTree Left;
	BinTree right;
};

void InorderTraversal(BinTree BT);
void PreorderTraversal(BinTree BT);
void PostorderTraversal(BinTree BT);
