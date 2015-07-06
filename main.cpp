#include "GraphManager.h"
#include "Node.h"
#include <iostream>

using namespace GC; 
int main()
{
    GraphManager gm;
    auto n0 = gm.newNode();
    auto n1 = gm.newNode();
    auto n2 = gm.newNode();
    auto n3 = gm.newNode();

    n0->addDependency(n1);
    n0->addDependency(n2);
    n1->addDependency(n3);
    n0->addDependency(n1);

    //std::cout << "n0.inedges" << std::endl;
    //for (auto node:n0->inedges()){
        //std::cout << node->serialno() << std::endl;
    //}

    //std::cout << "n1.outedges" << std::endl;
    //for (auto node:n1->outedges()){
        //std::cout << node->serialno() << std::endl;
    //}

    return 0;
}
