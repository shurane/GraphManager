#pragma once
#include "Node.h"
#include <vector>
#include <memory>

namespace GC {
    class GraphManager
    {
        unsigned m_counter = 0;
        std::vector<Node> m_nodes;
        std::vector<std::vector<Node> > m_inedges;
        std::vector<std::vector<Node> > m_outedges;
    public:
        Node* newNode();
    };
}
