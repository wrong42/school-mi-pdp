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
