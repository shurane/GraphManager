#include "Node.h"
#include "GraphManager.h"
#include <vector>
#include <algorithm>
#include <iostream>

namespace GC {
    void Node::addDependency(Node* node)
    {
        std::cout << "addDependency: this=" << m_serialno
                  << ",node=" << node->serialno() << std::endl;
        auto it = std::find_if(
                m_inedges.begin(),
                m_inedges.end(),
                [node](const Node* x){
                    std::cout 
                        << "x.s#="<< x->serialno() 
                        << ", node.s#=" << node->serialno() << std::endl;
                    return x->serialno() == node->serialno();
        });
        // TODO should we throw an exception here?
        //if (it != m_inedges.end())
            //return;
        //m_inedges.push_back(node);

        //auto it2 = std::find_if(
                //node->m_outedges.begin(),
                //node->m_outedges.end(),
                //[&](const Node* x){
                    //return x->serialno() == m_serialno;
        //});
        //// TODO throw something? EHTESH confused.
        //if (it2 != m_outedges.end())
            //return;
        //node->m_outedges.push_back(this);

        if (it == m_inedges.end())
        {
            m_inedges.push_back(node);
            node->m_outedges.push_back(this);
        }
    }
}
