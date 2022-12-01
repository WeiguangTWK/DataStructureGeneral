#include<stdlib.h>
#include"AdjacencyLists.h"

LGraph CreateAGraph(int VertexNum)
{
	Vertex V;
	LGraph Graph;

	Graph = (LGraph)malloc(sizeof(struct AGNode));

	if (Graph)
	{
		Graph->Ne = 0;
		Graph->Nv = VertexNum;
		for (V = 0; V < Graph->Nv; V++)
		{
			Graph->G[V].FirstEdge = NULL;
		}
	}
	return Graph;
}

void InsertAEdge(LGraph Graph, AEdge E) 
{
	PtrToAdjVNode NewNode;
	NewNode = (PtrToAdjVNode)malloc(sizeof(struct AdjVNode));
	if (NewNode)
	{
		NewNode->AdjV = E->V2;
		NewNode->Weight = E->Weight;
		NewNode->Next = Graph->G[E->V1].FirstEdge;
		Graph->G[E->V1].FirstEdge = NewNode;
	}
}