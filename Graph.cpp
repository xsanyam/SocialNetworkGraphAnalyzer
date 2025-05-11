#include "Graph.hpp"
#include <iostream>

void Graph::addUser(const std::string& user) {
    if (adjList.find(user) == adjList.end()) {
        adjList[user] = {};
    }
}

void Graph::addFriendship(const std::string& user1, const std::string& user2) {
    addUser(user1);
    addUser(user2);
    adjList[user1].push_back(user2);
    adjList[user2].push_back(user1); // undirected graph
}

void Graph::showConnections() const {
    for (const auto& pair : adjList) {
        std::cout << pair.first << ": ";
        for (const auto& friendName : pair.second) {
            std::cout << friendName << " ";
        }
        std::cout << "\n";
    }
}
