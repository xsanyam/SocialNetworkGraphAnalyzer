#include <iostream>
#include "Graph.hpp"

int main() {
    Graph g;

    g.addUser("Alice");
    g.addUser("Bob");
    g.addFriendship("Alice", "Charlie");
    g.addFriendship("Bob", "Charlie");
    g.addFriendship("Alice", "Bob");

    std::cout << "Social Network Connections:\n";
    g.showConnections();

    return 0;
}
