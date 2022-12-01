#pragma once
//二叉树,这里使用链式结构

using BTPosition = struct TNode*;
using BinTree = BTPosition;
struct TNode
{
	char Data;  //数据
	BinTree Left;   //左枝
	BinTree right;  //右枝
};

void InorderTraversal(BinTree BT);
void PreorderTraversal(BinTree BT);
void PostorderTraversal(BinTree BT);
