#pragma once
#define MaxVertexNum 100
#define INFINITY 65535
using Vertex = int;
using WeightType = int;
using DataType = char;


//图节点的定义
using PtrToGNode = struct GNode*;
struct GNode
{
	int Nv; //顶点数
	int Ne; //边数
	WeightType G[MaxVertexNum][MaxVertexNum]; //邻接矩阵
	DataType Data[MaxVertexNum]; //顶点数据
};
using MGraph = PtrToGNode;

//边的定义
using PtrToENode = struct ENode*;
struct ENode
{
	Vertex V1, V2;   //有向边V1->V2
	WeightType Weight;  //权重
};
using Edge = PtrToENode;


MGraph CreateGraph(int VertexNum);
void InsertEdge(MGraph Graph, Edge E);
MGraph BuildGraph();