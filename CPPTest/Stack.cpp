#include<iostream>
#include<cstdlib>
#include"Stack.h"

using namespace std;
Stack createstack(int size)
{
	Stack S = (Stack)malloc(sizeof(struct SNode));
	S->Top = -1;
	S->Data = (char*)malloc(sizeof(char) * size);
	S->maxsize = size;
	return S;
}

bool IsStackFull(Stack S)
{
	return(S->Top == S->maxsize - 1);
}

bool StackPush(Stack S, char x)
{
	if (IsStackFull(S))
	{
		cout << "��ջ���ˣ�" << endl;
		return false;
	}
	else
	{
		//cout << "DeBug:ѹ���ַ���" << x << endl;
		S->Data[++(S->Top)] = x;
		cout  << S->Top << endl;
		return true;
	}
}

bool IsStackEmpty(Stack S)
{
	//cout << "DeBug:S->Top=" << S->Top << endl;
	return(S->Top == -1);
}

char StackPop(Stack S)
{
	if (IsStackEmpty(S))
	{
		cout << "��ջ�գ�" << endl;
		return ' ';
	}
	else
	{
		return (S->Data[(S->Top)--]);
	}
}

/*
int main()  //���Զ�ջ����
{
	string userinp;
	cout << "�����ַ���:";
	cin >> userinp;
	int length = userinp.length();
	Stack S = createstack(length);
	for (auto it : userinp)
	{
		StackPush(S, it);
	}
	for (int i = 0; i < length; i++)
	{
		cout<<StackPop(S);
	}
	return 0;
}
*/