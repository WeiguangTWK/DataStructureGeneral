//这个是利用邻接表的方式表示图
#pragma once
#define MaxVertexNum 100
using Vertex = int;
using WeightType = int;
using ListDataType = char;
using PtrToENode = struct ENode*;


//边
struct ENode
{
	Vertex V1, V2;
	WeightType Weight;
};
using AEdge = PtrToENode;


//邻接点
using PtrToAdjVNode = struct AdjVNode*;
struct AdjVNode
{
	Vertex AdjV; //下标
	WeightType Weight; //权重
	PtrToAdjVNode Next; //指向下一个邻接点的指针
};

//顶点表头
typedef struct VNode
{
	PtrToAdjVNode FirstEdge; //边表头指针
	ListDataType Data; //顶点的数据
}AdjList[MaxVertexNum];
/*↑这个代码有点不说人话，解释一下（参考文章：http://c.biancheng.net/view/298.html）
在上面的代码中，实际上完成了两个操作：

1、定义了一个新的结构类型，代码如下所示：

struct VNode
{
	PtrToAdjVNode FirstEdge; //边表头指针
	ListDataType Data; //顶点的数据
};

其中，struct 关键字和 VNode 一起构成了这个结构类型，无论是否存在 typedef 关键字，这个结构都存在。

2、使用 typedef 为这个新的结构起了一个别名，叫 AdjList，即：
typedef struct VNode AdjList;

*/
using PtrToAGNode = struct AGNode*;
struct AGNode
{
	int Nv;
	int Ne;
	AdjList G; //邻接表
};
using LGraph = PtrToAGNode;

LGraph CreateAGraph(int VertexNum);
void InsertAEdge(LGraph Graph, AEdge E);
