# SocialNetworkGraphAnalyzer

> A simple C++ project to analyze and visualize relationships in a social network using graph data structures.

## 🔧 Features

- Add users and their connections.
- Display all users and their friends.
- Analyze connections using basic graph traversal logic.


## 🛠️ Tech Stack

- **Language**: C++
- **Build System**: CMake
- **Version Control**: Git & GitHub

## 📁 Project Structure

SocialNetworkGraphAnalyzer/
├── CMakeLists.txt       # CMake build configuration
├── Graph.hpp            # Graph class declaration
├── Graph.cpp            # Graph class definition
├── main.cpp             # Main function
├── README.md            # Project documentation
├── output/              # Output directory
└── build/               # Build output directory



## 🚀 How to Build & Run

### 💻 Prerequisites

- C++ compiler (e.g., g++)
- CMake

### 🧱 Build Steps

mkdir -p output/build
cd output/build
cmake ../..
cmake --build .


▶️ Run
./SocialNetworkGraphAnalyzer


✅ Expected Output
Social Network Connections:
Charlie: Alice Bob
Bob: Charlie Alice
Alice: Charlie Bob


👨‍💻 Author
-xsanyam

-🔗 GitHub: xsanyam

-🎓 Student at IIT BHU | Aspiring SDE

