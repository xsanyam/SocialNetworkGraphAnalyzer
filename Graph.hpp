#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <unordered_map>
#include <vector>
#include <string>

class Graph {
private:
    std::unordered_map<std::string, std::vector<std::string>> adjList;

public:
    void addUser(const std::string& user);
    void addFriendship(const std::string& user1, const std::string& user2);
    void showConnections() const;
};

#endif
