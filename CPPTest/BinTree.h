#pragma once
//������,����ʹ����ʽ�ṹ

using BTPosition = struct TNode*;
using BinTree = BTPosition;
struct TNode
{
	char Data;  //����
	BinTree Left;   //��֦
	BinTree right;  //��֦
};

void InorderTraversal(BinTree BT);
void PreorderTraversal(BinTree BT);
void PostorderTraversal(BinTree BT);
