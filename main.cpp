#include <cstdlib>
#include <iostream>
#include "inputReader.h"
#include "graph.h"

using namespace std;

int main(int args, char * argv[])
{
  cout << "Start of application. Number of arguments: " << args << endl;

  if (args < 2) return 1;

  Graph * graph = InputReader.ReadGraph(argv[1]);

  return 0;
}
