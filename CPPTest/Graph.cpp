#include<iostream>
#include<stdlib.h>
#include"Graph.h"


MGraph CreateGraph(int VertexNum)
{
	Vertex V, W;
	MGraph Graph;

	Graph = (MGraph)malloc(sizeof(struct GNode));
	if (Graph)
	{
		Graph->Nv = VertexNum;
		Graph->Ne = 0;
		for (V = 0; V < Graph->Nv; V++)
		{
			for (W = 0; W < Graph->Nv; W++)
				Graph->G[V][W] = INFINITY;
		}
	}


	
	return Graph;
}

void InsertEdge(MGraph Graph, Edge E)
{
	Graph->G[E->V1][E->V2] = E->Weight;
	Graph->G[E->V2][E->V1] = E->Weight; //����ͼ��Ҫ�����˵㷴�����ٽ���һ������
};

MGraph BuildGraph()
{
	MGraph Graph;
	Edge E;
	Vertex V;
	int Nv, i;

	printf("���붥������");
	scanf_s("%d", &Nv);
	Graph = CreateGraph(Nv);

	printf("���������");
	scanf_s("%d", &(Graph->Ne));
	if (Graph->Ne != 0)
	{
		E = (Edge)malloc(sizeof(struct ENode));
		if (E)
		{
			for (i = 0; i < Graph->Ne; i++)
			{
				printf("�����%d���ߵ������˵�", i);
				scanf_s("%d%d%d", &E->V1, &E->V2, &E->Weight);
				InsertEdge(Graph, E);
			}
		}
	}
	for (V = 0; V < Graph->Nv; V++)
	{
		printf("�����%d����������ݣ�",V);
		scanf_s("%c", &(Graph->Data[V]));
	}
	return Graph;
}