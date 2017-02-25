#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "inputReader.h"

using namespace std;

static Graph* Graph::ReadGraph(const char* file)
{
   ifstream ifs = new ifstream();
   ifs.open(file, stream::read);

   unsigned numberOfNodes, tmp;
   ifs >> numberOfNodes;

   Graph * graph = new Graph(numberOfNodes);

   for (unsigned i = 0; i < numberOfNodes; i++)
   {
	for (unsigned j = i; j < numberOfNodes; j++)
	{
	    ifs >> tmp;
	    graph->m_NodeMatrix[i][j] = tmp == 0 ? false : true;
	    graph->m_NodeMatrix[j][i] = tmp == 0 ? false : true;
	}
   }

   ifs.close();

   return graph;
}
