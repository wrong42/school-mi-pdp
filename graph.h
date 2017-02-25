#ifndef __GRAPH_H__
#define __GRAPH_H__

struct Graph
{
  public:
    	Graph(unsigned);
	Graph(const Graph&);
       ~Graph();

    void RemoveEdge(unsigned, unsigned);

  public: 
    bool ** m_NodeMatrix;
    unsigned m_NumberOfNodes;
};

#endif // __GRAPH+H
