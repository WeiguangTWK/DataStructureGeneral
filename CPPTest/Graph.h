#pragma once
#define MaxVertexNum 100
#define INFINITY 65535
using Vertex = int;
using WeightType = int;
using DataType = char;


//ͼ�ڵ�Ķ���
using PtrToGNode = struct GNode*;
struct GNode
{
	int Nv; //������
	int Ne; //����
	WeightType G[MaxVertexNum][MaxVertexNum]; //�ڽӾ���
	DataType Data[MaxVertexNum]; //��������
};
using MGraph = PtrToGNode;

//�ߵĶ���
using PtrToENode = struct ENode*;
struct ENode
{
	Vertex V1, V2;   //�����V1->V2
	WeightType Weight;  //Ȩ��
};
using Edge = PtrToENode;


MGraph CreateGraph(int VertexNum);
void InsertEdge(MGraph Graph, Edge E);
MGraph BuildGraph();