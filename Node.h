#pragma once
#include <vector>

namespace GC {
    class GraphManager;
    class Node
    {
        int m_serialno;
        GraphManager* m_gm;
        std::vector<Node*> m_inedges;
        std::vector<Node*> m_outedges;
    public:
        Node(int serialno, GraphManager* gm): 
            m_serialno(serialno), m_gm(gm) {}
        int serialno() const { return m_serialno; }
        const std::vector<Node*>& inedges() const { return m_inedges; }
        const std::vector<Node*>& outedges() const { return m_outedges; }
        void addDependency(Node* node);
    };
}

