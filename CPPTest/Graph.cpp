#include<iostream>
#include<stdlib.h>
#include"Graph.h"


MGraph CreateGraph(int VertexNum)
{
	Vertex V, W;
	MGraph Graph;

	Graph = (MGraph)malloc(sizeof(struct GNode));
	Graph->Nv = VertexNum;
	Graph->Ne = 0;

	for (V = 0; V < Graph->Nv; V++)
	{
		for (W = 0; W < Graph->Nv; W++)
			Graph->G[V][W] = INFINITY;
	}
	return Graph;
}

void InsertEdge(MGraph Graph, Edge E)
{

};