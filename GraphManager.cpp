#include "GraphManager.h"
#include "Node.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <memory>

namespace GC { 
    Node* GraphManager::newNode() {
        std::cout << "GraphManager.counter:" << m_counter << std::endl;
        m_nodes.emplace_back(m_counter++, this);
        return &m_nodes.back();
    }
}
