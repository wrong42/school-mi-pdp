#include "graph.h"
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

Graph::Graph(unsigned numberOfNodes)
{
   m_NumberOfNodes = numberOfNodes;

   m_NodeMatrix = new bool*[m_NumberOfNodes];
   
   for (unsigned i = 0; i < m_NumberOfNodes; i++)
   {
	m_NodeMatrix[i] = new bool[m_NumberOfNodes];
	memset((void*)m_NodeMatrix[i], 0, m_NumberOfNodes * sizeof(bool));
   }
}

Graph::Graph(const Graph & src)
{
   m_NumberOfNodes = src.m_NumberOfNodes;
   m_NodeMatrix = new bool*[m_NumberOfNodes];

   for (unsigned i = 0; i < m_NumberOfNodes; i++)
   {
	m_NodeMatrix[i] = new bool[m_NumberOfNodes];
	memcpy((void*)m_NodeMatrix[i], src.m_NodeMatrix[i], m_NumberOfNodes * sizeof(bool));
   }
}

Graph::~Graph()
{
   for (unsigned i = 0; i < m_NumberOfNodes; i++)
   {
	delete[] m_NodeMatrix[i];
   }

   delete[] m_NodeMatrix;
}

void Graph::RemoveEdge(unsigned node1, unsigned node2)
{
   cout << "Removing edge: node1 = " << node1 << ", node2 = " << node2 << endl;

   m_NodeMatrix[node1][node2] = false;
   m_NodeMatrix[node2][node1] = false;

   cout << "Edge successfully removed" << endl;
}
