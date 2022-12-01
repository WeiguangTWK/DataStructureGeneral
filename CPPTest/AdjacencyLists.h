//����������ڽӱ�ķ�ʽ��ʾͼ
#pragma once
#define MaxVertexNum 100
using Vertex = int;
using WeightType = int;
using ListDataType = char;
using PtrToENode = struct ENode*;


//��
struct ENode
{
	Vertex V1, V2;
	WeightType Weight;
};
using AEdge = PtrToENode;


//�ڽӵ�
using PtrToAdjVNode = struct AdjVNode*;
struct AdjVNode
{
	Vertex AdjV; //�±�
	WeightType Weight; //Ȩ��
	PtrToAdjVNode Next; //ָ����һ���ڽӵ��ָ��
};

//�����ͷ
typedef struct VNode
{
	PtrToAdjVNode FirstEdge; //�߱�ͷָ��
	ListDataType Data; //���������
}AdjList[MaxVertexNum];
/*����������е㲻˵�˻�������һ�£��ο����£�http://c.biancheng.net/view/298.html��
������Ĵ����У�ʵ�������������������

1��������һ���µĽṹ���ͣ�����������ʾ��

struct VNode
{
	PtrToAdjVNode FirstEdge; //�߱�ͷָ��
	ListDataType Data; //���������
};

���У�struct �ؼ��ֺ� VNode һ�𹹳�������ṹ���ͣ������Ƿ���� typedef �ؼ��֣�����ṹ�����ڡ�

2��ʹ�� typedef Ϊ����µĽṹ����һ���������� AdjList������
typedef struct VNode AdjList;

*/
using PtrToAGNode = struct AGNode*;
struct AGNode
{
	int Nv;
	int Ne;
	AdjList G; //�ڽӱ�
};
using LGraph = PtrToAGNode;

LGraph CreateAGraph(int VertexNum);
void InsertAEdge(LGraph Graph, AEdge E);
