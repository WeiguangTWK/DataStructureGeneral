//二叉树的链式实现

#include<iostream>
#include<string>
#include<cstdlib>
#include"BinTree.h"
#include"Queue.h"   //这里需要将结合二叉树以及栈使用
#include"Stack.h"
using namespace std;

void InorderTraversal(BinTree BT)     //中序遍历
{
	if (BT)
	{
		InorderTraversal(BT->Left);
		cout << BT->Data << endl;
		InorderTraversal(BT->right);
	}
}

void PreorderTraversal(BinTree BT)     //先序遍历
{
	if (BT)
	{
		InorderTraversal(BT->Left);
		cout << BT->Data << endl;
		InorderTraversal(BT->right);
	}
}

void PostorderTraversal(BinTree BT)     //后序遍历
{
	if (BT)
	{
		InorderTraversal(BT->Left);
		cout << BT->Data << endl;
		InorderTraversal(BT->right);
	}
}

void LevelOrderTravel(BinTree BT)      //层序遍历
{
	Queue Q;
	BinTree BT_2;

	if (!BT) return;
	Q = createqueue();
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
